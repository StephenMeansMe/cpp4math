# C++ For Mathematicians
## Chapter 03 Exercises

### Problem 3.1
*Use the Euclidean algorithm to find `d = gcd(51, 289)` and to find integers `x` and `y` so that `d = 51 * x + 289 * y`.*

The greatest common divisor of 51 and 289 is `17`. We have that `17 = x * 51 + y * 289` for
all pairs `(x, y) = (6 + k * 17, -1 - k * 3)` where `k` is any integer. Note that `51 = 17 * 3` and `289 = 17 * 17`.

### Problem 3.2
*On page 39 we presented the following mostly correct procedure for computing factorials:*
```{cpp}
long factorial(long n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}
```
*This procedure, however, still has a bug. What is it?*

The procedure doesn't account for negative values of `n`, so if (e.g.) passed `n = -1` it will run until `n` overflows.

### Problem 3.3
*Write a procedue to calculate the sign of its argument (the signum function).*

### Problem 3.4
*Write two procedures for producing the nth Fibonacci number when the number `n` is given as input. In one procedure, use a `for` loop and produce the answer using iteration. In the second version, use recursion. The input argument and return value should be of type `long`.*

### Problem 3.5
*Write a `main` to test the Fibonacci procedures you created in Exercise 3.4. Use it to evaluate F_20, F_30, and F_40. You should find that one version is much faster than the other. Explain why. Include an analysis of how many times the recursive version of your procedure gets called in order to compute F_n.*

Iterative is much faster than recursive. This is because the recursive algorithm
calls the procedure F(n) times. F(0) and F(1) each take 1 call. F(2) takes F(0)
+ F(1) = 2 calls. F(3) = F(2) + F(1) = 2 + 1 = 3 calls. F(4) = F(3) + F(2) = 3 +
2 = 5 calls, and so on.

### Problem 3.6
*Write two procedures to calculate $f(N) = \sum_{k=1}^N \frac{1}{k^2}$. Note that for $N$ large, this approaches $\zeta(2) = \pi^2 / 6$. The first procedure should calculate the sum in the usual order $$ 1 + \frac{1}{4} + \frac{1}{9} + \cdots + \frac{1}{N^2}$$ and the second should calculate the sum in the reverse order $$\frac{1}{N^2} + \frac{1}{(N - 1)^2} + \cdots + \frac{1}{4} + 1$$. In both cases, use `float` variables for all real values. Evaluate these sums for $N = 10^6$ and report which gives the better result. Explain.*

The forward sum gives a value of `1.64473`, which is about `-0.000208735` away from the true value of $\pi^2 / 6$. The backward sum gives a value of `1.64493`, which is about `-0.000001073` away from the true value.
