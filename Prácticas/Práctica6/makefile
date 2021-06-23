# CC=g++

main.out: main.o ElementoLR.o GramaticaLibreDeContexto.o AlgoritmoSubconjuntos.o AlgoritmoConstruccionLR0.o TablaDeAnalisisSintactico.o
	g++ main.o ElementoLR.o GramaticaLibreDeContexto.o AlgoritmoSubconjuntos.o TablaDeAnalisisSintactico.o AlgoritmoConstruccionLR0.o -o main.out

main.o: main.cpp
	g++ -c main.cpp;

ElementoLR.o: ElementoLR.cpp ElementoLR.hpp
	g++ -c ElementoLR.cpp

GramaticaLibreDeContexto.o: GramaticaLibreDeContexto.cpp GramaticaLibreDeContexto.hpp
	g++ -c GramaticaLibreDeContexto.cpp

AlgoritmoSubconjuntos.o: AlgoritmoSubconjuntos.cpp AlgoritmoSubconjuntos.hpp
	g++ -c AlgoritmoSubconjuntos.cpp

TablaDeAnalisisSintactico.o: TablaDeAnalisisSintactico.cpp TablaDeAnalisisSintactico.hpp
	g++ -c TablaDeAnalisisSintactico.cpp

AlgoritmoConstruccionLR0.o: AlgoritmoConstruccionLR0.cpp AlgoritmoConstruccionLR0.hpp
	g++ -c AlgoritmoConstruccionLR0.cpp

clean:
	rm *.o
