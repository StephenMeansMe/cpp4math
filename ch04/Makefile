## CHAPTER 04 EXAMPLES
mc_primes.o: examples/mc_primes.cc examples/uniform.h ../ch03/examples/gcd.h
	g++ -Wall -c -O examples/mc_primes.cc

gcd.o: ../ch03/examples/gcd.cc ../ch03/examples/gcd.h
	g++ -Wall -c -O ../ch03/examples/gcd.cc

uniform.o: examples/uniform.cc examples/uniform.h
	g++ -Wall -c -O examples/uniform.cc

mc_primes: mc_primes.o gcd.o uniform.o
	g++ -Wall -O -o mc_primes mc_primes.o gcd.o uniform.o

## CHAPTER 04 EXERCISES
