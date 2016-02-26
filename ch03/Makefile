
## CHAPTER 03 EXAMPLES
gcd.o: examples/gcd.cc examples/gcd.h
	g++ -Wall -c -O examples/gcd.cc

gcd-tester.o : examples/gcd-tester.cc examples/gcd.h
	g++ -c -O examples/gcd-tester.cc

gcd-tester : gcd.o gcd-tester.o
	g++ -O -o gcd-tester gcd.o gcd-tester.o

exhaust.o : examples/exhaust.cc examples/gcd.h
	g++ -Wall -c -O exhaust.cc

exhaust : gcd.o exhaust.o
	g++ -Wall -O -o exhaust gcd.o exhaust.o

## CHAPTER 03 PROBLEMS

# CH 03 PR 01
ex03_01.o: exercises/ex03_01.cc examples/gcd.h
	g++ -Wall -c -O exercises/ex03_01.cc

ex03_01: ex03_01.o gcd.o
	g++ -Wall -O -o ex03_01 ex03_01.o gcd.o

# CH 03 PR 04
fibonacci_iter.o: exercises/fibonacci_iter.cc exercises/fibonacci_iter.h
	g++ -Wall -c -O exercises/fibonacci_iter.cc

fibonacci_recur.o: exercises/fibonacci_recur.cc exercises/fibonacci_recur.h
	g++ -Wall -c -O exercises/fibonacci_recur.cc

# CH 03 PR 05
ex03_05.o: ex03_05.cc exercises/fibonacci_iter.h exercises/fibonacci_recur.h
	g++ -Wall -c -O exercises/ex03_05.cc
	
ex03_05: ex03_05.o fibonacci_iter.o fibonacci_recur.o
	g++ -Wall -O -o ex03_05 ex03_05.o fibonacci_iter.o fibonacci_recur.o

# CH 03 PR 06
zeta2sums.o: exercises/zeta2sums.cc exercises/zeta2sums.h
	g++ -Wall -c -O exercises/zeta2sums.cc

ex03_06.o: exercises/zeta2sums.h
	g++ -Wall -c -O exercises/ex03_06.cc

ex03_06: ex03_06.o zeta2sums.o
	g++ -Wall -O -o ex03_06 ex03_06.o zeta2sums.o
	
# CH 03 PR 07
polar2xy.o: src/polar2xy.cc src/polar2xy.h
	g++ -Wall -c -O src/polar2xy.cc

xy2polar.o: src/xy2polar.cc src/xy2polar.h
	g++ -Wall -c -O src/xy2polar.cc

ex03_07.o: ex03_07.cc src/polar2xy.h src/xy2polar.h
	g++ -Wall -c -O ex03_07.cc

ex03_07: ex03_07.o polar2xy.o xy2polar.o
	g++ -Wall -O -o ex03_07 ex03_07.o polar2xy.o xy2polar.o

# CH 03 PR 08
one_zero_mult.o: one_zero_mult.cc one_zero_mult.h
	g++ -Wall -c -O one_zero_mult.cc

ex03_08.o: ex03_08.cc one_zero_mult.h
	g++ -Wall -c -O ex03_08.cc

ex03_08: ex03_08.o one_zero_mult.o
	g++ -Wall -O -o ex03_08 ex03_08.o one_zero_mult.o
