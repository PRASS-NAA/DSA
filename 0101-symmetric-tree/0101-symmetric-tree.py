# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:

        self.ans = True

        if root is None:
            return True

        curr1 = root.left
        curr2 = root.right    

        self.helper(curr1,curr2)

        return self.ans


    def helper(self,leftr,rightr):

        if leftr is None and rightr is None:
            return

        if leftr is None and rightr is not None or leftr is not None and rightr is None:
            self.ans = False
            return    

        if leftr.val != rightr.val:
            self.ans = False

        self.helper(leftr.left, rightr.right)
        self.helper(leftr.right, rightr.left)        
                
        