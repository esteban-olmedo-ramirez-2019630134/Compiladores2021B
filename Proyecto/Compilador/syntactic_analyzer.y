%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol_table.h"
	#define _BOOL_ 1
	#define _INT_ 2
	#define _LONG_ 3
	#define _FLOAT_ 4
	#define _DOUBLE_ 5
	#define _CHAR_ 6
	#define _STRING_ 7
	#define _TILE_ 8
	void yyerror(const char* message){
		printf("%s\n", message);
		exit(1);
	}

	int checkTypes(int type1, int type2) {
		if(type1 == type2) return 0;
		printf("estas seguro que sabes programar?!!!\n");
		exit(1);
	}
	void assignUnary(symrec* $$, symrec* $1, int opc);
  	void assignValue(symrec* a, symrec* b, symrec* c, int opc);
  %}

%define api.value.type union
%token <symrec*> IDENTIFIER 
%token <symrec*> INT FLOAT DOUBLE LONG BOOL CHAR STRING
%token <symrec*> CONST_CHAR CONST_BOOL CONST_LONG
%token <symrec*> CONST_INT CONST_FLOAT CONST_DOUBLE CONST_STRING
%nterm <symrec*> variable_declaration variable type expression condition constant vector rule
%nterm <int> logical_operator comparation_operator
%nterm <Tile*> tile_content

%token FUNCTION
%token MAIN
%token ALGORITHM 
%token PLUSPLUS MINUSMINUS
%token FOR WHILE IF ELSE
%token <symrec*> RULE
%token SET SMARTTILE TILE SECTION
%token _BEGIN END NEW JOIN CONTAINER
%token NAME TILESET DEFAULT
%token <int> GREATER_EQ LESS_EQ AND_OP OR_OP NEQ GREATER LESS EQ

%precedence '='
%left '-' '+'
%left '*' '/'
%precedence NEG

%%
// declaracion inicial main
input
	: %empty
	| set_size initial_declaration main_function 		{printf("SIUUUUUUUU!!!!!!\n");}
	;
set_size
	: SET '=''{' CONST_INT','CONST_INT'}'';' 		{printf("Declaracion de tamanio\n");}
	;

initial_declaration
	: initial_declaration section			{}
	| initial_declaration smarttile			{}
	| %empty
	;
smarttile
	: SMARTTILE IDENTIFIER '{'tiles_list'}'		{printf("smarttile");}
	;

tiles_list
	: tiles_list tile				{printf("tile_list");}
	| %empty
	;

tile
	: TILE IDENTIFIER '{'tile_content rule'}'	{
			if(getsym($2 -> name) != NULL) {
				printf("60 anios, una protesis\n");
				exit(1);
			}
			putsym($2 -> name, _TILE_);
			symrec *aux = getsym($2 -> name);
			aux -> value.tile = *($4);

			for(int i = 0; i < 3; i++) {
				for(int j = 0; j < 3; j++) {
					aux -> value.tile.rule[i][j] = $5 -> value.tile.rule[i][j];
					printf("%d ", aux -> value.tile.rule[i][j]);
				}
				printf("\n");
			}
							}
	;

section
	: SECTION IDENTIFIER ':' ALGORITHM '{'section_declaration'}'  { printf("Seccion\n"); }
	;

section_declaration
	:  IDENTIFIER'='constant';' 		{ printf("Declaracion"); }
	;

tile_content
	: NAME '=' CONST_STRING ';' TILESET'='CONST_STRING ';' DEFAULT'=' CONST_BOOL';' {
			$$ = (Tile*)malloc(sizeof(Tile));
			$$ -> name = (char*) malloc(sizeof(char)*strlen($3 -> value._string));
			strcpy($$ -> name, $3 -> value._string);
			$$ -> tileset = (char*) malloc(sizeof(char)*strlen($7 -> value._string));
			strcpy($$ -> name, $7 -> value._string);
			$$ -> flag = $11 -> value._bool;
								}
	;

main_function
	: MAIN '{' code_block '}'  { printf("Funcion principal\n"); }
	;

code_block
	: statement ';'             { printf("statement"); }
	| statement ';' code_block   { printf("statement code_block"); }
	| error                  { yyerrok; }
	;
rule
	: %empty		{printf("xd\n");}
	| RULE '=''{'vector','vector','vector'}'	{
			$$ = (symrec*)malloc(sizeof(symrec));	
			for(int i = 0; i < 3; i++)
				$$ -> value.tile.rule[0][i]= $4 -> value._vector[i];
			for(int i = 0; i < 3; i++)
				$$ -> value.tile.rule[1][i]= $6 -> value._vector[i];
			for(int i = 0; i < 3; i++)
				$$ -> value.tile.rule[2][i]= $8 -> value._vector[i];
			for(int i = 0; i < 3; i++) {
				for(int j = 0; j < 3; j++) {
					printf("%d ", $$ -> value.tile.rule[i][j]);
				}
				printf("\n");
			}
							}
	;
vector
	: '{'expression','expression','expression'}' 	{
			checkTypes($2 -> type, $4 -> type);
			checkTypes($4 -> type, $6 -> type);
			if($2 -> type != _INT_)  {
				printf("Hoy es noche de FREE FIRE!!!\n");
			}
			$$ = (symrec*)malloc(sizeof(symrec));
			$$ -> value._vector[0] = $2 -> value._int;
			$$ -> value._vector[1] = $4 -> value._int; 
			$$ -> value._vector[2] = $6 -> value._int;
							}
	;
statement
	: variable_declaration   { printf("variable\n"); }
	| expression   { printf("expresion\n"); }
	| FUNCTION     { printf("funcion\n"); }
	| for          { printf("for\n"); }
	| while        { printf("while\n"); }
	| if           { printf("if\n"); }
	;
variable_declaration
	: type variable '=' expression             	{
		if(getsym($2 -> name) != NULL) {
			printf("Redeclaracion de variable!!!\n");
			exit(1);
		}
		checkTypes($1 -> type, $4 -> type);
		$$ -> type = $1 -> type;
		assignUnary($2, $4, '=');
		$2 -> type = $1 -> type;
		assignUnary($$, $2, '=');
		putsym($2 -> name, $1 -> type);
		symrec* aux = getsym($2 -> name);
		assignUnary(aux, $4, '=');
		printf("%s: %d\n", $2 -> name, aux -> value._bool);
		printf("%s: %d\n", $2 -> name, aux -> value._int);
		printf("%s: %f\n", $2 -> name, aux -> value._double);
							}
	| type variable '=' variable                	{ 
		symrec *aux;
		if((aux = getsym($4 -> name)) == NULL) {
			printf("La variable no ha sido declarada!!!\n");
			exit(1);
		}
		if(getsym($2 -> name) != NULL) {
			printf("La variable se redeclaro\n");
			exit(1);
		}
		checkTypes($1 -> type, aux -> type);
		assignUnary($2, aux, '=');
		assignUnary($$, aux, '=');
		$$ -> type = aux -> type;
		putsym($2 -> name, aux -> type);
		printf("%s: %d\n", $2 -> name, $$ -> value._int);
		printf("tipo idenfificador = idenfificador\n"); 
							}
	| type variable   		                { 
		if(getsym($2 -> name) != NULL) {
			printf("La variable se redeclaro\n");
			exit(1);
		}
		$$ -> type = $1 -> type;
		putsym($2 -> name, $1 -> type);
		printf("tipo idenfificador\n"); 
							}
	;
variable
	: IDENTIFIER'['expression']'			{printf("Identificador[expresion]\n");}
	| IDENTIFIER'['CONST_INT']'			{printf("Identificador[constante]\n");}
	| IDENTIFIER'['IDENTIFIER']'			{printf("Identificador[Identificador]\n");}
	| IDENTIFIER					{
		printf("Identifier: %s\n", $1 -> name);
		strcpy($$ -> name, $1 -> name); 
		printf("Identificador<---\n");
							}
	;
while
	: WHILE '(' condition ')' '{' code_block '}'   { printf("while\n"); }
	;

for 
	: FOR '(' variable_declaration ';' condition ';' expression ')' '{' code_block '}'   { printf("for\n"); }
	;

if
	: IF '(' condition ')' '{' code_block '}'   				{ printf("if\n"); }
	| IF '(' condition ')' '{' code_block '}' ELSE '{'code_block'}'  	{ printf("if else\n"); }
	;

expression
	: constant                       		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		printf("constate: "); 
		$$ -> type = $1 -> type; 
		assignUnary($$, $1, '=');
			
							}
	| expression '+' expression      		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		checkTypes($1 -> type, $3 -> type);
		$$ -> type = $1 -> type;
		assignValue($$, $1, $3, '+');
		printf("expresion + expresion\n"); 
							}
	| expression '-' expression      		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		checkTypes($1-> type, $3 -> type);
		$$ -> type = $1 -> type;
		assignValue($$, $1, $3, '-');
          	printf("expresion - expresion\n"); 
              						}
	| expression '*' expression      		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		checkTypes($1-> type, $3 -> type);
		$$ -> type = $1 -> type;
		printf("$1 -> value: %d\n", $1 -> value._int);
		printf("$3 -> value: %d\n", $3 -> value._int);
		printf("%p\n", $$);
		printf("%p\n", $1);
		printf("%p\n", $3);
		assignValue($$, $1, $3, '*');
		printf("ValMul: %d\n", $$ -> value._int);
		printf("expression * expression\n");
		free($1);
		free($3);
              						}
	| expression '/' expression      		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		checkTypes($1-> type, $3 -> type);
		$$ -> type = $1 -> type;
		assignValue($$, $1, $3, '/');
		printf("expression / expression\n"); 
		free($1);
		free($3);
              						}
	| FUNCTION  '(' expression ')'   		{ printf("funcion\n"); }
	| '-' expression %prec NEG       		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = $2 -> type;
		assignUnary($$, $2, '-');
		free($2);
							}
	| '(' expression ')'             		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = $2 -> type;
		assignUnary($$, $2, '=');
		printf("( %d )\n", $2 -> value._int);
		printf("(expression)\n"); 
		free($2);
              						}
	| variable PLUSPLUS                    		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		symrec* aux = getsym($1 -> name);
		if(aux == NULL) {
			printf("Ni vas a acabar la carrera\n");
			exit(1);
		}
		$$ -> type = aux -> type;
		assignUnary(aux, aux, PLUSPLUS);
		assignUnary($$, aux, '=');
		printf("idenfificado++\n"); 
		free($1);
              						}
	| variable MINUSMINUS                    	{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		symrec* aux = getsym($1 -> name);
		if(aux == NULL) {
			printf("te pido el cambio de carrera o tu lo pides?");
			exit(1);
		}
		$$ -> type = aux -> type;
		assignUnary(aux, aux, MINUSMINUS);
		assignUnary($$, aux, '=');
		printf("idenfificador--\n"); 
		free($1);
              						}
	| variable                     			{ 
		symrec* aux = getsym($1 -> name);
		if(aux == NULL) {
			printf("Se esta usando una variable no declarada\n");
			exit(1);
		}
		$$ -> type = aux -> type;
		assignUnary($$, aux, '=');
		free($1);
							}
	| condition                      		{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _BOOL_;
		$$ -> value._bool = $1 -> value._bool;
							}
	| variable '='expression      			{ 
		symrec* aux = getsym($1 -> name);
		if(aux == NULL) {
			printf("Neta we, ya mejor vete a dormir\n");
			exit(1);
		}
		checkTypes(aux -> type, $3 -> type);
		$$ -> type = $3 -> type;
		assignUnary(aux, $3, '=');
		assignUnary($$, aux, '=');
		printf("idenfificador = expresion\n"); 
		free($3);
		free($1);
					      		}
	;
//| variable JOIN CONST_CHAR variable		{ printf("Join completo"); }
condition
	: condition logical_operator condition  { 
		$$ = (symrec*)malloc(sizeof(symrec));
		checkTypes($1 -> type, $3 -> type);
		assignValue($$, $1, $3, $2); 
		printf("condicion op condicion\n"); 
              					}
	| expression comparation_operator expression        { 
		printf("xd: %d\n", $2);
		$$ = (symrec*)malloc(sizeof(symrec));
		checkTypes($1 -> type, $3 -> type);

		$$ -> type = _BOOL_;
		assignValue($$, $1, $3, $2);
		free($1);
		free($3);
		printf("variable\n"); 
              						}
	| CONST_BOOL                              	{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _BOOL_;
		$$ -> value._bool = $1 -> value._bool;
		free($1);
		printf("constante: ");
              						}
	| '!' condition                        { 
		$$ = (symrec*)malloc(sizeof(symrec));
        	if($2 -> type != _BOOL_) {
        		printf("No coinciden los tipos mi tio\n");
        		exit(1);
          	}
		$$ -> type = CONST_BOOL;
		assignUnary($$, $2, '!');
		printf("no condicion\n");
              }
	| '!' variable 				{
		symrec *aux = getsym($2 -> name);
		if(aux == NULL || aux -> type != _BOOL_) {
			printf("No nos interesa tu rollo, nomas que funcione\n");
			exit(1);
		}
		$$ -> value._bool = !(aux -> value._bool);
		$$ -> type = _BOOL_;
		free($2);
						}
	| '(' condition ')'                     { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = $2 -> type;
		assignUnary($$,$2,'=');
		printf("(condicion)\n"); 
              					}
	;

logical_operator
	: AND_OP 				{ $$ = $1; }
	| OR_OP					{ $$ = $1; }
	;
comparation_operator
	: GREATER_EQ 				{ $$ = $1; }
	| GREATER				{ $$ = $1; printf("Valor: %d\n", $1); }
	| LESS_EQ				{ $$ = $1; }
	| LESS					{ $$ = $1; }
	| NEQ					{ $$ = $1; }
	| EQ					{ $$ = $1; }
	;
constant
	: CONST_INT     { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> value._int = $1 -> value._int; 
		$$ -> type = _INT_; 
		printf("const_int\n"); 
		}
	| CONST_FLOAT   { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> value._float = $1 -> value._float; 
		$$ -> type = _FLOAT_; 
		printf("const_float\n"); 
		}
	| CONST_DOUBLE  { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> value._double = $1 -> value._double; 
		$$ -> type = _DOUBLE_; 
		printf("const_double\n"); 
		}
	| CONST_CHAR    { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> value._char = $1 -> value._char; 
		$$ -> type = _CHAR_; 
		printf("const_char\n"); 
		}
	| CONST_BOOL   	{ 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> value._bool = $1 -> value._bool; 
		$$ -> type = _BOOL_; 
		printf("const_bool\n"); 
		}
	| CONST_STRING {
		$$ = (symrec*)malloc(sizeof(symrec));	
		int len = strlen($1 -> value._string);
		$$ -> value._string = (char*)malloc(sizeof(char)*len);
		strcpy($$ -> value._string, $1 -> value._string);
		$$ -> type = _STRING_;
		free($1);
		}
	;

type
	: INT      { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _INT_; printf("int\n"); 
		}
	| FLOAT    { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _FLOAT_; printf("float\n"); 
		}
	| DOUBLE   { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _DOUBLE_; printf("double\n"); 
		}
	| LONG     { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _LONG_; printf("long\n"); 
		}
	| BOOL     { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _BOOL_; printf("bool\n"); 
		}
	| CHAR     { 
		$$ = (symrec*)malloc(sizeof(symrec));
		$$ -> type = _CHAR_; printf("char\n"); 
		}
	| STRING   {
		$$  = (symrec*) malloc(sizeof(symrec));
		$$ -> type = _STRING_; 
		printf("String\n");
		}
	;


%%
tabla_hash sym_table;
void init_table() {
	int i = 0;
	sym_table.MOD = 9887;
	for(i = 0; i < sym_table.MOD; i++) {
		sym_table.table[i] = NULL;
	}
}
int get_hash(char const *name) {
	printf("gethash\n");
	int i = 0;
	int ret = 0;
	int pot = 1;
	int prime = 31;
	printf("Name: %s\n", name);
	for(i = 0; i < strlen(name); i++) {
		ret += (name[i]*pot)%sym_table.MOD;
		if(ret > sym_table.MOD)
			ret -= sym_table.MOD;
		pot = (pot * prime) % sym_table.MOD;
	}
	printf("Valor hash: %d\n", ret);
	return ret % sym_table.MOD;
}

void putsym(char const *name, int sym_type) {
	printf("putsym\n");
	int hash_val = get_hash(name);
	symrec *new_one = (symrec *) malloc (sizeof (symrec));
	strcpy(new_one -> name, name);
	new_one -> type = sym_type;
	sym_table.table[hash_val] = new_one;
}
symrec *getsym(char const *name) {
	printf("getsym\n");
	int hash_val = get_hash(name);
	return sym_table.table[hash_val];
}
int main(int argc, char** argv) {
	init_table();
	yyparse();
	return 0;
}

void assignUnary(symrec* $$, symrec* $1, int opc) {
 	printf("$1 -> type = %d\n", $1 -> type);
    switch($1 -> type) {
      case _INT_:
        switch(opc) {
          case '-': $$ -> value._int = -$1 -> value._int; break;
          case '=': $$ -> value._int = $1 -> value._int; break;
          case PLUSPLUS: $$ -> value._int = $1 -> value._int + 1; break;
          case MINUSMINUS: $$ -> value._int = $1 -> value._int - 1; break;
        }
        break;
      case _FLOAT_:
        switch(opc) {
          case '-': $$ -> value._float = -$1 -> value._float; break;
          case '=': $$ -> value._float = $1 -> value._float; break;
          case PLUSPLUS: $$ -> value._float = $1 -> value._float + 1; break;
          case MINUSMINUS: $$ -> value._float = $1 -> value._float - 1; break;
        }
        break;
      case _DOUBLE_:
        switch(opc) {
          case '-': $$ -> value._double = -$1 -> value._double; break;
          case '=': $$ -> value._double = $1 -> value._double; break;
          case PLUSPLUS: $$ -> value._double = $1 -> value._double + 1; break;
          case MINUSMINUS: $$ -> value._double = $1 -> value._double - 1; break;
        }
        break;
      case _CHAR_:
        switch(opc) {
          case '=': $$ -> value._char = $1 -> value._char; break;
        }
        break;
      case _BOOL_:
        if(opc == '!') {
          $$ -> value._bool = !($1 -> value._bool); break;
        }
        else if(opc == '='){
          $$ -> value._bool = $1-> value._bool;
        }
        break;
      case _LONG_:
        switch(opc) {
          case '-': $$ -> value._long = -$1 -> value._long; break;
          case '=': $$ -> value._long = -$1 -> value._long; break;
          case PLUSPLUS: $$ -> value._long = $1 -> value._long + 1; break;
          case MINUSMINUS: $$ -> value._long = $1 -> value._long - 1; break;
        } 
        break;
	case _STRING_:
		if(opc == '=') {
			int len = strlen($1 -> value._string);
			$$ -> value._string = (char*)malloc(len*sizeof(char));
			strcpy($$ -> value._string, $1 -> value._string);
		}
		else {
			printf("Que haces, eso no se puede\n");
		}
	break;
      default:
      	printf("Error unario\n");
        printf("Hay un error!\n");
        exit(1);
    }
  }
  // Para operaciones binarias
void assignValue(symrec* a, symrec* b, symrec* c, int opc) {
	printf("OPC: %d\n", opc);
	switch(b -> type) {
		case _INT_:
			printf("B: %d\n", b -> value._int);
			printf("C: %d\n", c -> value._int);
			switch(opc) {
				case '+': a -> value._int = b -> value._int + c -> value._int; break;			
				case '-': a -> value._int = b -> value._int - c -> value._int; break;			
				case '*': a -> value._int = b -> value._int * c -> value._int; break;			
				case '/': a -> value._int = b -> value._int / c -> value._int; break;			
				case LESS: a -> value._bool = b -> value._int < c -> value._int; break;			
				case GREATER: a -> value._bool = b -> value._int > c -> value._int; break;
				case GREATER_EQ: a -> value._bool = b -> value._int >= c -> value._int; break;
				case LESS_EQ: a -> value._bool = b -> value._int <= c -> value._int; break;
				case NEQ: a-> value._bool = b -> value._int != c -> value._int; break;
				case EQ: a-> value._bool = b -> value._int == c -> value._int; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _FLOAT_:
			switch(opc) {
				case '+': a -> value._float = b -> value._float + c -> value._float; break;
				case '-': a -> value._float = b -> value._float - c -> value._float; break;
				case '*': a -> value._float = b -> value._float * c -> value._float; break;
				case '/': a -> value._float = b -> value._float / c -> value._float; break;
				case LESS: a -> value._bool = b -> value._float < c -> value._float; break;
				case GREATER: a -> value._bool = b -> value._float > c -> value._float; break;
				case GREATER_EQ: a -> value._bool = b -> value._float >= c -> value._float; break;
				case LESS_EQ: a -> value._bool = b -> value._float <= c -> value._float; break;
				case NEQ: a-> value._bool = b -> value._float != c -> value._float; break;
				case EQ: a-> value._bool = b -> value._float == c -> value._float; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _DOUBLE_:
			printf("%f / %f\n", b -> value._double, c -> value._double);
			switch(opc) {
				case '+': a -> value._double = b -> value._double + c -> value._double; break;
				case '-': a -> value._double = b -> value._double - c -> value._double; break;
				case '*': a -> value._double = b -> value._double * c -> value._double; break;
				case '/': a -> value._double = b -> value._double / c -> value._double;break;
				case LESS: a-> value._bool = b -> value._double < c -> value._double;break;
				case GREATER: a-> value._bool = b -> value._double > c -> value._double;break;
				case GREATER_EQ: a -> value._bool = b -> value._double >= c -> value._double;break;
				case LESS_EQ: a-> value._bool = b -> value._double <= c -> value._double;break;
				case NEQ: a-> value._bool = b -> value._double != c -> value._double; break;
				case EQ: a-> value._bool = b -> value._double == c -> value._double; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _CHAR_:
			switch(opc) {
				case '+': a -> value._char = b -> value._char + c -> value._char; break;
				case '-': a -> value._char = b -> value._char - c -> value._char; break;
				case '*': a -> value._char = b -> value._char * c -> value._char; break;
				case '/': a -> value._char = b -> value._char / c -> value._char; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _BOOL_:
			switch(opc) {
				case '+': a -> value._bool = b -> value._bool | c -> value._bool; break;
				case '*': a -> value._bool = b -> value._bool & c -> value._bool; break;
				case OR_OP: a -> value._bool = b -> value._bool | c -> value._bool; break;
				case AND_OP: a -> value._bool = b -> value._bool & c -> value._bool; break;	
  				case NEQ: a-> value._bool = b -> value._bool != c -> value._bool; break;
  				case EQ: a-> value._bool = b -> value._bool != c -> value._bool; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _LONG_:
			switch(opc) {
				case '+': a -> value._long = b -> value._long + c -> value._long; break;	
				case '-': a -> value._long = b -> value._long - c -> value._long; break;	
				case '*': a -> value._long = b -> value._long * c -> value._long; break;	
				case '/': a -> value._long = b -> value._long / c -> value._long; break;	
				case LESS: a-> value._bool = b -> value._long < c -> value._long; break;
				case GREATER: a-> value._bool = b -> value._long > c -> value._long; break;
				case GREATER_EQ: a -> value._bool = b -> value._long >= c -> value._long;break;
				case LESS_EQ: a-> value._bool = b -> value._long <= c -> value._long; break;
				case NEQ: a-> value._bool = b -> value._long != c -> value._long; break;
				case EQ: a-> value._bool = b -> value._long == c -> value._long; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		default:
			printf("Hay un error!\n");
			exit(1);
	}
}

