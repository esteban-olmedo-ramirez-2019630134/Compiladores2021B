# CC = g++
afn_afd.out: main.o ConversorDeCadena.o ConstructorThompson.o GeneradorDot.o automatas.o TransformadorAFNAFD.o 
	g++ main.o automatas.o ConstructorThompson.o ConversorDeCadena.o GeneradorDot.o TransformadorAFNAFD.o -o afn_afd.out
	rm automatas.o

automatas.o: AFN.o NodoAFN.o AFD.o NodoAFD.o
	ld -relocatable AFN.o NodoAFN.o AFD.o NodoAFD.o -o automatas.o

GeneradorDot.o: GeneradorDot.cpp GeneradorDot.hpp
	g++ -c GeneradorDot.cpp

TransformadorAFNAFD.o: TransformadorAFNAFD.cpp TransformadorAFNAFD.hpp
	g++ -c TransformadorAFNAFD.cpp

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

clean:
	rm *.o
