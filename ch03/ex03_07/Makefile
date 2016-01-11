polar2xy.o: src/polar2xy.cc src/polar2xy.h
	g++ -Wall -c -O src/polar2xy.cc

xy2polar.o: src/xy2polar.cc src/xy2polar.h
	g++ -Wall -c -O src/xy2polar.cc

ex03_07.o: ex03_07.cc src/polar2xy.h src/xy2polar.h
	g++ -Wall -c -O ex03_07.cc

ex03_07: ex03_07.o polar2xy.o xy2polar.o
	g++ -Wall -O -o ex03_07 ex03_07.o polar2xy.o xy2polar.o

clean:
	rm *.o
