gcd.o: src/gcd.cc src/gcd.h
	g++ -Wall -c -O src/gcd.cc

ex03_01.o: ex03_01.cc src/gcd.h
	g++ -Wall -c -O ex03_01.cc

ex03_01: ex03_01.o gcd.o
	g++ -Wall -O -o ex03_01 ex03_01.o gcd.o

clean:
	rm *.o
