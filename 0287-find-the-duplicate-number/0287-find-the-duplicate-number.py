class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        map = {}

        for i in nums:
            if i in map:
                map[i] = map[i]+1
            else:
                map[i] = 1

        for key in map:
            if map[key] > 1:
                return key           