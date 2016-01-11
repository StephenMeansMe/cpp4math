fibonacci_iter.o: src/fibonacci_iter.cc src/fibonacci_iter.h
	g++ -Wall -c -O src/fibonacci_iter.cc

fibonacci_recur.o: src/fibonacci_recur.cc src/fibonacci_recur.h
	g++ -Wall -c -O src/fibonacci_recur.cc

ex03_05.o: ex03_05.cc src/fibonacci_iter.h src/fibonacci_recur.h
	g++ -Wall -c -O ex03_05.cc

ex03_05: ex03_05.o fibonacci_iter.o fibonacci_recur.o
	g++ -Wall -O -o ex03_05 ex03_05.o fibonacci_iter.o fibonacci_recur.o

clean:
	rm *.o
