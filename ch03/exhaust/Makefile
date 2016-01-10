gcd.o : src/gcd.cc src/gcd.h
	g++ -Wall -c -O src/gcd.cc

exhaust.o : exhaust.cc src/gcd.h
	g++ -Wall -c -O exhaust.cc

exhaust : gcd.o exhaust.o
	g++ -Wall -O -o exhaust gcd.o exhaust.o
