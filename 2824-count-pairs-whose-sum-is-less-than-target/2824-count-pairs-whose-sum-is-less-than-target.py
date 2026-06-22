class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        
        l = 0
        r = len(nums) - 1

        nums.sort()

        count = 0

        while l < r:
            total = nums[l] + nums[r]

            if total < target:
                count += (r-l)
                l += 1


            if total >= target:
                r -=1

        return count        
