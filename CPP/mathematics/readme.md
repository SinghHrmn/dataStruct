Fibonacci Series | Some Usecases & Interesting Facts
-----------------------------------------------------

`f(n) = f(n-1) + f(n-2)`

Sample Problems
---------------

Q1) Find the number of boolean strings of length N, with no consecutive one's

Q2) Find number of ways to build a wall of size 2 X N, with bricks of size 1X2 and 2X1.

How to Compute
--------------
- Recursion (useful if only N is small(N<=20) | Complexity is 2^N  )
- Top-Down DP                                 | O(N)
- Bottom-UP DP                                | O(N)
- DP with Space Optimization (Three Variables)| O(N)
- Matrix Exponentiation                       | O(K^3 Log N) K=2 (log N)
- Binet's Formula (Approximation)
- [CodeForces Hack](https://codeforces.com/blog/entry/14516) 

Interesting Properties
----------------------

Zeckendorf's Theorem : Each positive number can be written in a unique way as sum of one or more fibonacci numbers such that sum doesn't include any consecutive numbers.

100 = 89 + 8 + 3
77 = 55 + 21 + 1
17 = 13 + 3 + 1

Pisano Period:
Last 1/2/3/4 digit(s) of fibonacci number repeat with period of
60/300/1500/15000 respectively.

---------------------------------------------------------------------

