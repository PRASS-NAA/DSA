# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0

        stk = []
        temp = root
        prev = None
        min_diff = float('inf')

        while stk or temp:
            while temp:
                stk.append(temp)
                temp = temp.left

            temp = stk.pop()

            if prev is not None:
                min_diff = min(min_diff, temp.val - prev)  
            prev = temp.val  

            # Move to the right subtree
            temp = temp.right 

        return min_diff          