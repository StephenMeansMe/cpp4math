# ============================================================================ #
# C++ FOR MATHEMATICIANS -- CHAPTER 03                                         #
# ---------------------------------------------------------------------------- #
## PARAMETERS
BASE_DIR=..
CH03_DIR=../ch03

## CHAPTER 03 EXAMPLES
all-examples: gcd-tester exhaust

gcd.o: $(CH03_DIR)/examples/gcd.cc $(CH03_DIR)/examples/gcd.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/examples/gcd.cc

gcd-tester.o : $(CH03_DIR)/examples/gcd-tester.cc $(CH03_DIR)/examples/gcd.h
	g++ -I $(BASE_DIR) -c -O $(CH03_DIR)/examples/gcd-tester.cc

gcd-tester : gcd.o gcd-tester.o
	g++ -o gcd-tester -O gcd.o gcd-tester.o

exhaust.o : $(CH03_DIR)/examples/exhaust.cc $(CH03_DIR)/examples/gcd.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/examples/exhaust.cc

exhaust : gcd.o exhaust.o
	g++ -Wall -o exhaust -O gcd.o exhaust.o

## CHAPTER 03 PROBLEMS
all-exercises: ex03_01 ex03_05 ex03_06 ex03_07 ex03_08

# CH 03 PR 01
ex03_01.o: $(CH03_DIR)/exercises/ex03_01.cc $(CH03_DIR)/examples/gcd.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/ex03_01.cc

ex03_01: ex03_01.o gcd.o
	g++ -o ex03_01 -Wall -O ex03_01.o gcd.o

# CH 03 PR 04
fib_procs.o: $(CH03_DIR)/exercises/fib_procs.cc $(CH03_DIR)/exercises/fib_procs.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/fib_procs.cc

# CH 03 PR 05
ex03_05.o: $(CH03_DIR)/exercises/ex03_05.cc $(CH03_DIR)/exercises/fib_procs.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/ex03_05.cc
	
ex03_05: ex03_05.o fib_procs.o
	g++ -o ex03_05 -Wall -O ex03_05.o fib_procs.o

# CH 03 PR 06
zeta2sums.o: $(CH03_DIR)/exercises/zeta2sums.cc $(CH03_DIR)/exercises/zeta2sums.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/zeta2sums.cc

ex03_06.o: $(CH03_DIR)/exercises/zeta2sums.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/ex03_06.cc

ex03_06: ex03_06.o zeta2sums.o
	g++ -o ex03_06 -Wall -O ex03_06.o zeta2sums.o
	
# CH 03 PR 07
polar_conv.o: $(CH03_DIR)/exercises/polar_conv.cc $(CH03_DIR)/exercises/polar_conv.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/polar_conv.cc

ex03_07.o: $(CH03_DIR)/exercises/ex03_07.cc $(CH03_DIR)/exercises/polar_conv.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/ex03_07.cc

ex03_07: ex03_07.o polar_conv.o
	g++ -o ex03_07 -Wall -O ex03_07.o polar_conv.o

# CH 03 PR 08
one_zero_mult.o: $(CH03_DIR)/exercises/one_zero_mult.cc $(CH03_DIR)/exercises/one_zero_mult.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/one_zero_mult.cc

ex03_08.o: $(CH03_DIR)/exercises/ex03_08.cc $(CH03_DIR)/exercises/one_zero_mult.h
	g++ -I $(BASE_DIR) -Wall -c -O $(CH03_DIR)/exercises/ex03_08.cc

ex03_08: ex03_08.o one_zero_mult.o
	g++ -o ex03_08 -Wall -O ex03_08.o one_zero_mult.o
