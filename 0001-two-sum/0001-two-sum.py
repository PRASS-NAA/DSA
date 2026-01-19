class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = []
        map = {}


        for i in range(0,len(nums)):
            diff = target - nums[i]

            if diff in map:
                ans.append(i)
                ans.append(map[diff])
                break
            
            map[nums[i]] = i

        return ans    