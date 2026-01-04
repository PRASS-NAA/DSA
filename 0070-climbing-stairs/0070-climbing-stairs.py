class Solution:
    def climbStairs(self, n: int) -> int:

        if n == 0:
            return 0
        x = self.sol(n)

        return x

    def sol(self,n, memo={}):
        if n == 1:
            return 1
        if n == 2:
            return 2

        if n in memo:
            return memo[n]

        memo[n] = self.sol(n-1,memo) + self.sol(n-2, memo) 

        return memo[n]               