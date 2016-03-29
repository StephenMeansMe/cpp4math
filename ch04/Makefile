## DECLARATIONS
BASE_DIR=base
CPPFLAGS=-Wall -pedantic -ansi
LDFLAGS=

## CHAPTER 04 EXAMPLES
mc_primes.o: examples/mc_primes.cc examples/uniform.h ../ch03/examples/gcd.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/mc_primes.cc

gcd.o: ../ch03/examples/gcd.cc ../ch03/examples/gcd.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O ../ch03/examples/gcd.cc

uniform.o: examples/uniform.cc examples/uniform.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O examples/uniform.cc

mc_primes: mc_primes.o gcd.o uniform.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o mc_primes -O mc_primes.o gcd.o uniform.o



## CHAPTER 04 EXERCISES

sq_unif.o: exercises/sq_unif.cc exercises/sq_unif.h examples/uniform.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/sq_unif.cc

ex04_01.o: exercises/ex04_01.cc exercises/sq_unif.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/ex04_01.cc

ex04_01: ex04_01.o sq_unif.o uniform.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o ex04_01 -O ex04_01.o sq_unif.o uniform.o

buffon.o: exercises/buffon.cc exercises/buffon.h examples/uniform.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/buffon.cc

ex04_02.o: exercises/ex04_02.cc exercises/buffon.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/ex04_02.cc

ex04_02: ex04_02.o buffon.o uniform.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o ex04_02 -O ex04_02.o buffon.o uniform.o

sylvester.o: exercises/sylvester.cc exercises/sylvester.h examples/uniform.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/sylvester.cc

ex04_03.o: exercises/ex04_03.cc exercises/sylvester.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/ex04_03.cc

ex04_03: ex04_03.o sylvester.o uniform.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o ex04_03 -O ex04_03.o sylvester.o uniform.o

point_on_circle.o: exercises/point_on_circle.cc exercises/point_on_circle.h examples/uniform.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/point_on_circle.cc

ex04_04.o: exercises/ex04_04.cc exercises/point_on_circle.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/ex04_04.cc

ex04_04: ex04_04.o point_on_circle.o uniform.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o ex04_04 -O ex04_04.o point_on_circle.o uniform.o

point_on_sphere.o: exercises/point_on_sphere.cc exercises/point_on_sphere.h examples/uniform.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/point_on_sphere.cc

ex04_05.o: exercises/ex04_05.cc exercises/point_on_sphere.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/ex04_05.cc

ex04_05: ex04_05.o point_on_sphere.o uniform.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o ex04_05 -O ex04_05.o point_on_sphere.o uniform.o

random_walk.o: exercises/random_walk.cc exercises/random_walk.h examples/uniform.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/random_walk.cc

ex04_06.o: exercises/ex04_06.cc exercises/random_walk.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/ex04_06.cc

ex04_06: ex04_06.o random_walk.o uniform.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o ex04_06 -O ex04_06.o random_walk.o uniform.o

updown.o: exercises/updown.cc exercises/updown.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/updown.cc

ex04_07.o: exercises/ex04_07.cc exercises/updown.h
	g++ -I $(BASE_DIR) $(CPPFLAGS) -c -O exercises/ex04_07.cc

ex04_07: ex04_07.o updown.o
	g++ -I $(BASE_DIR) $(LDFLAGS) -o ex04_07 -O ex04_07.o updown.o
