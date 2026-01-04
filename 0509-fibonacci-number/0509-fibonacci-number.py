class Solution:
    def fib(self, n: int) -> int:

        if n == 0:
            return 0
        x = self.fibo(n)

        return x


    def fibo(self, n, memo={}):
        if n == 1 or n == 2:
            return 1

        if n in memo:
            return memo[n]

        memo[n] = self.fibo(n-1, memo) + self.fibo(n-2, memo)

        return memo[n]                
        