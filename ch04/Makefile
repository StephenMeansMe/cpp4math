## DECLARATIONS
BASE_DIR=base

## CHAPTER 04 EXAMPLES
mc_primes.o: examples/mc_primes.cc examples/uniform.h ../ch03/examples/gcd.h
	g++ -I $(BASE_DIR) -Wall -c -O examples/mc_primes.cc

gcd.o: ../ch03/examples/gcd.cc ../ch03/examples/gcd.h
	g++ -I $(BASE_DIR) -Wall -c -O ../ch03/examples/gcd.cc

uniform.o: examples/uniform.cc examples/uniform.h
	g++ -I $(BASE_DIR) -Wall -c -O examples/uniform.cc

mc_primes: mc_primes.o gcd.o uniform.o
	g++ -I $(BASE_DIR) -Wall -o mc_primes -O mc_primes.o gcd.o uniform.o



## CHAPTER 04 EXERCISES

sq_unif.o: exercises/sq_unif.cc exercises/sq_unif.h ../ch04/examples/uniform.h
	g++ -I $(BASE_DIR) -Wall -c -O exercises/sq_unif.cc

ex04_01.o: exercises/ex04_01.cc exercises/sq_unif.h
	g++ -I $(BASE_DIR) -Wall -c -O exercises/ex04_01.cc

ex04_01: ex04_01.o sq_unif.o uniform.o
	g++ -I $(BASE_DIR) -Wall -o ex04_01 -O ex04_01.o sq_unif.o uniform.o