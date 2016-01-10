# C++ For Mathematicians
## Chapter 03 Exercises

### Problem 3.1
**Use the Euclidean algorithm to find `d = gcd(51, 289)` and to find integers `x` and `y` so that `d = 51 * x + 289 * y`.**

The greatest common divisor of 51 and 289 is `d`. The pair `(x, y)` was found to be `(x, y)`.

### Problem 3.2
**On page 39 we presented the following mostly correct procedure for computing factorials:**
```{cpp}
long factorial(long n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}
```
**This procedure, however, still has a bug. What is it?**

The procedure doesn't account for negative values of `n`, so if (e.g.) passed `n = -1` it will run until `n` overflows.

### Problem 3.3
**Write a procedue to calculate the sign of its argument (the signum function).**

### Problem 3.4
**Write two procedures for producing the nth Fibonacci number when the number `n` is given as input. In one procedure, use a `for` loop and produce the answer using iteration. In the second version, use recursion. The input argument and return value should be of type `long`.**

### Problem 3.5
**Write a `main` to test the Fibonacci procedures you created in Exercise 3.4. Use it to evaluate F_20, F_30, and F_40. You should find that one version is much faster than the other. Explain why. Include an analysis of how many times the recursive version of your procedure gets called in order to compute F_n.**
