## DECLARATIONS
BASE_DIR=base
CPPFLAGS=-Wall -pedantic -ansi
LDFLAGS=

## CHAPTER 05 EXAMPLES

factor.o: examples/factor.cc examples/factor.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/factor.cc

example05_03.o: examples/example05_03.cc examples/factor.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/example05_03.cc

example05_03: example05_03.o factor.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o example05_03 -O example05_03.o factor.o

totient.o: examples/totient.cc examples/totient.h examples/factor.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/totient.cc

example05_05.o: examples/example05_05.cc examples/totient.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/example05_05.cc

example05_05: example05_05.o totient.o factor.o
	g++ -I $(BASE_DIR) $(CPPFLAGS) -o example05_05 -O example05_05.o totient.o factor.o

sieve.o: examples/sieve.cc examples/sieve.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/sieve.cc

example05_08.o: examples/example05_08.cc examples/sieve.h examples/factor.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/example05_08.cc

example05_08: example05_08.o sieve.o factor.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o example05_08 -O example05_08.o sieve.o factor.o

faster_totient.o: examples/faster_totient.cc examples/faster_totient.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/faster_totient.cc

example05_09.o: examples/example05_09.cc examples/faster_totient.h examples/sieve.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/example05_09.cc

example05_09: example05_09.o faster_totient.o sieve.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o example05_09 -O example05_09.o faster_totient.o sieve.o

example05_10.o: examples/example05_10.cc examples/faster_totient.h examples/sieve.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/example05_10.cc

example05_10: example05_10.o faster_totient.o sieve.o
	g++ -I $(BASE_DIR) $(CPPFLAGS) -o example05_10 -O example05_10.o faster_totient.o sieve.o

## CHAPTER 05 EXERCISES

