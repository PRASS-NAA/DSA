class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        k = 0
        i =0
        j=1
        while(j < len(nums)):
            if(nums[i] != nums[j]):
                i = i+1
                nums[i] = nums[j]
                
            else:
                j = j+1
                
        
        return i+1                
        