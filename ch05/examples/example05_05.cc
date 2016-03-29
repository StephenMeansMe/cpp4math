#include <ch05/examples/totient.h>
#include <iostream>

int main() {

	for( int k = 1; k <= 100; k++ ) {
		std::cout << k << "\t" << totient(k) << std::endl;
	}
	return 0;
}
