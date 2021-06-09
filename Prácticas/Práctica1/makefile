# CC = g++

thompson.out: main.o AFN.o ConversorDeCadena.o ConstructorThompson.o NodoAFN.o GeneradorDot.o
	g++ main.o AFN.o ConstructorThompson.o ConversorDeCadena.o NodoAFN.o GeneradorDot.o -o thompson.out

main.o: main.cpp
	g++ -c main.cpp

ConversorDeCadena.o: ConversorDeCadena.cpp ConversorDeCadena.hpp
	g++ -c ConversorDeCadena.cpp


ConstructorThompson.o: ConstructorThompson.cpp ConstructorThompson.hpp
	g++ -c ConstructorThompson.cpp

AFN.o: AFN.cpp AFN.hpp
	g++ -c AFN.cpp

NodoAFN.o: NodoAFN.cpp NodoAFN.hpp
	g++ -c NodoAFN.cpp

GeneradorDot.o: GeneradorDot.cpp GeneradorDot.hpp
	g++ -c GeneradorDot.cpp

clean:
	rm *.o
