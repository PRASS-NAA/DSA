class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []

        map = {}

        for i in nums:
            if i in map:
                map[i] = map[i] + 1
            else:
                map[i] = 1


        for key in map:
            if map[key] == 2:
                ans.append(key)


        return ans                   