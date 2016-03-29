#include <ch05/examples/faster_totient.h>
#include <ch05/examples/sieve.h>
#include <iostream>

int main() {
	const int N = 100;	// testing up to N

	long primes[10*N];	// table of primes
	sieve( 10*N, primes );
	for( long k = 1; k <= N; k++ ) {
		std::cout << k << "\t" << totient( k, primes ) << std::endl;
	}
	return 0;
}
