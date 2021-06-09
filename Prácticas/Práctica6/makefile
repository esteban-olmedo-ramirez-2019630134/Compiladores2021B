# CC=g++

main.out: main.o ElementoLR.o GramaticaLibreDeContexto.o AlgoritmoSubconjuntos.o
	g++ main.o ElementoLR.o GramaticaLibreDeContexto.o AlgoritmoSubconjuntos.o -o main.out
	rm *.o

main.o: main.cpp
	g++ -c main.cpp;

ElementoLR.o: ElementoLR.cpp ElementoLR.hpp
	g++ -c ElementoLR.cpp

GramaticaLibreDeContexto.o: GramaticaLibreDeContexto.cpp GramaticaLibreDeContexto.hpp
	g++ -c GramaticaLibreDeContexto.cpp

AlgoritmoSubconjuntos.o: AlgoritmoSubconjuntos.cpp AlgoritmoSubconjuntos.hpp
	g++ -c AlgoritmoSubconjuntos.cpp

clean:
	rm *.o
