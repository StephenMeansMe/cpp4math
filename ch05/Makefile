## DECLARATIONS
BASE_DIR=base
CPPFLAGS=-I $(BASE_DIR) -Wall -pedantic -ansi
LDFLAGS=

## CHAPTER 05 EXAMPLES

factor.o: examples/factor.cc examples/factor.h
	g++ $(CPPFLAGS) -c -O examples/factor.cc

example05_03.o: examples/example05_03.cc examples/factor.h
	g++ $(CPPFLAGS) -c -O examples/example05_03.cc

example05_03: example05_03.o factor.o
	g++ $(LDFLAGS) -o example05_03 -O example05_03.o factor.o

totient.o: examples/totient.cc examples/totient.h examples/factor.h
	g++ $(CPPFLAGS) -c -O examples/totient.cc

example05_05.o: examples/example05_05.cc examples/totient.h
	g++ $(CPPFLAGS) -c -O examples/example05_05.cc

example05_05: example05_05.o totient.o factor.o
	g++ $(CPPFLAGS) -o example05_05 -O example05_05.o totient.o factor.o

sieve.o: examples/sieve.cc examples/sieve.h
	g++ $(CPPFLAGS) -c -O examples/sieve.cc

example05_08.o: examples/example05_08.cc examples/sieve.h examples/factor.h
	g++ $(CPPFLAGS) -c -O examples/example05_08.cc

example05_08: example05_08.o sieve.o factor.o
	g++ $(LDFLAGS) -o example05_08 -O example05_08.o sieve.o factor.o

faster_totient.o: examples/faster_totient.cc examples/faster_totient.h
	g++ $(CPPFLAGS) -c -O examples/faster_totient.cc

example05_09.o: examples/example05_09.cc examples/faster_totient.h examples/sieve.h
	g++ $(CPPFLAGS) -c -O examples/example05_09.cc

example05_09: example05_09.o faster_totient.o sieve.o
	g++ $(LDFLAGS) -o example05_09 -O example05_09.o faster_totient.o sieve.o

example05_10.o: examples/example05_10.cc examples/faster_totient.h examples/sieve.h
	g++ $(CPPFLAGS) -c -O examples/example05_10.cc

example05_10: example05_10.o faster_totient.o sieve.o
	g++ $(LDFLAGS) -o example05_10 -O example05_10.o faster_totient.o sieve.o

## CHAPTER 05 EXERCISES

ex05_01.o: exercises/ex05_01.cc examples/faster_totient.h examples/sieve.h
	g++ $(CPPFLAGS) -c -O exercises/ex05_01.cc

ex05_01: ex05_01.o faster_totient.o sieve.o
	g++ $(LDFLAGS) -o ex05_01 -O ex05_01.o faster_totient.o sieve.o

ex05_07: exercises/ex05_07.cc
	g++ $(LDFLAGS) -o ex05_07 -c exercises/ex05_07.cc

find_max.o: exercises/find_max.cc exercises/find_max.h
	g++ $(CPPFLAGS) -c -O exercises/find_max.cc

ex05_08.o: exercises/ex05_08.cc exercises/find_max.h
	g++ $(CPPFLAGS) -c -O exercises/ex05_08.cc

ex05_08: ex05_08.o find_max.o
	g++ $(LDFLAGS) -o ex05_08 -O ex05_08.o find_max.o

make_fibs.o: exercises/make_fibs.cc exercises/make_fibs.h
	g++ $(CPPFLAGS) -c -O exercises/make_fibs.cc

ex05_09.o: exercises/ex05_09.cc exercises/make_fibs.h
	g++ $(CPPFLAGS) -c -O exercises/ex05_09.cc

ex05_09: ex05_09.o make_fibs.o
	g++ $(LDFLAGS) -o ex05_09 -O ex05_09.o make_fibs.o

fibs.o: exercises/fibs.cc exercises/fibs.h exercises/make_fibs.h
	g++ $(CPPFLAGS) -c -O exercises/fibs.cc

ex05_10.o: exercises/ex05_10.cc exercises/fibs.h
	g++ $(CPPFLAGS) -c -O exercises/ex05_10.cc

ex05_10: ex05_10.o fibs.o make_fibs.o
	g++ $(LDFLAGS) -o ex05_10 -O ex05_10.o fibs.o make_fibs.o
