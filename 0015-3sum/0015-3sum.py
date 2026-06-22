class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        

        nums.sort()

        ans = []

        for i in range(len(nums)-1):

            if i > 0 and nums[i] == nums[i-1]:
                continue


            target = -nums[i]

            l = i + 1
            r = len(nums) - 1

            while l < r:
                if nums[l] + nums[r] == target:
                    ans.append([nums[i], nums[l], nums[r]])
                    l += 1
                    r -=1

                    while l < r and nums[l] == nums[l - 1]:
                        l += 1

                    while l < r and nums[r] == nums[r + 1]:
                        r -= 1

                elif nums[l] + nums[r] > target:
                    r -=1

                elif nums[l] + nums[r] < target:
                    l += 1    

        return ans            