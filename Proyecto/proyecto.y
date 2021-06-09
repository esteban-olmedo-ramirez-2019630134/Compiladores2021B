%{
	#include <stdio.h>
%}

%token <constante*> CONSTANTE
%token <symrec*> IDENTIFICADOR FUNCION
%token INT FLOAT DOUBLE LONG BOOL CHAR
%token FOR WHILE IF
%token SET TILESET TILE NAME PATH MAPWIDTH
%token OPERADOR_LOGICO
%token CONST_INT CONST_FLOAT CONST_DOUBLE CONST_CHAR CONST_BOOL

%precedence '='
%left '-' '+'
%left '*' '/'
%precedence NEG

%%
operacion
	: CONSTANTE				{}
	| IDENTIFICADOR
	| IDENTIFICADOR '=' operacion		{}
	| FUNCION  '(' operacion ')’		{}
	| operacion '+' operacion		{}
	| operacion '-' operacion		{}
	| operacion '*' operacion		{}
	| operacion '/' operacion		{}
	| '-' operacion %prec NEG		{}
	| operacion '^' operacion		{}
	| '(' operacion ')'			{}
	;
condicion
	: condicion OPERADOR_LOGICO condicion   {}
	| IDENTIFICADOR				{}
	| CONSTANTE				{}
	| '!' condicion				{}
	| '(' condicion ')'			{}
	;
lista_de_constantes
	: constante ',' lista_de_constantes     {}
	| constante
	;
constante
	: CONST_INT				{}
	| CONST_FLOAT 				{}
	| CONST_DOUBLE 				{}
	| CONST_CHAR 				{}
	| CONST_BOOL				{}
	;
tipo
	: INT 					{}
	| FLOAT 				{}
	| DOUBLE 				{}
	| LONG 					{}
	| BOOL 					{}
	| CHAR					{}
	;

variable
	: tipo IDENTIFICADOR '['CONST_INT']' '=' IDENTIFICADOR';' 		{}
	| tipo IDENTIFICADOR '=' IDENTIFICADOR';'				{}
	| tipo IDENTIFICADOR '['CONST_INT']'';'					{}
	| tipo IDENTIFICADOR';'							{}
	| tipo IDENTIFICADOR '['CONST_INT']' = '{'lista_de_constantes'}' 	{}
	| tipo IDENTIFICADOR '=' constante ';'					{}
	;
statement
	: IDENTIFICADOR								{}
	| FUNCION								{}
	| for									{}
	| while									{}
	;
	 
bloque_codigo
	: statement								{}
	| statement bloque_codigo						{}
	;

while
	: WHILE '(' condicion ')' '{'bloque_codigo'}'				{}
	;
for 
	: FOR '(' variable ';' condicion ';' operacion ')''{'bloque_codigo'}'	{}
	;
if
	: IF '(' condicion ')' '{' bloque_codigo '}'				{}
%%

int main() {
	yyparse();
	return 0;
}
