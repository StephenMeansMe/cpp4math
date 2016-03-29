#include <ch05/examples/sieve.h>
#include <iostream>

const long N = 10000000;	// ten million
const long TABLE_SIZE = 800000;	// prime number theorem overestimate

int main() {
//	long* primes;
//	primes = new long[TABLE_SIZE];
	long primes[TABLE_SIZE];
	long np = sieve( N, primes );

	std::cout << "We found " << np << " primes" << std::endl;
	std::cout << "The first 10 primes we found are these: " << std::endl;

	for( long k = 0; k < 10; k++ ) std::cout << primes[k] << " ";
	std::cout << std::endl;

	std::cout << "The largest prime we found is " << primes[np - 1] << std::endl;
	
//	delete[] primes;
	return 0;
}
