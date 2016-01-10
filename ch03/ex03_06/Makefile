zeta2sum_fwd.o: zeta2sum_fwd.cc zeta2sum_fwd.h
	g++ -Wall -c -O zeta2sum_fwd.cc

zeta2sum_rev.o: zeta2sum_rev.cc zeta2sum_rev.h
	g++ -Wall -c -O zeta2sum_rev.cc

zeta2sums.o: zeta2sums.cc zeta2sum_fwd.h zeta2sum_rev.h
	g++ -Wall -c -O zeta2sums.cc

zeta2sums: zeta2sum_fwd.o zeta2sum_rev.o zeta2sums.o
	g++ -Wall -O -o zeta2sums zeta2sum_fwd.o zeta2sum_rev.o zeta2sums.o

clean:
	rm *.o
