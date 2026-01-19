class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        map = {}
        ans = len(nums) // 2

        for i in nums:

            if i in map:
                map[i] = map[i] + 1
            else:
                map[i] = 1

        for key in map:
            if map[key] > ans:
                return key