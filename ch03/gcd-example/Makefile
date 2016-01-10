gcd.o : src/gcd.cc src/gcd.h
	g++ -c -O src/gcd.cc
gcd-tester.o : gcd-tester.cc src/gcd.h
	g++ -c -O gcd-tester.cc
gcd-tester : gcd.o gcd-tester.o
	g++ -O -o gcd-tester gcd.o gcd-tester.o
