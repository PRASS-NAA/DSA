# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        ans = self.checkValid(root.left, root.right)

        return ans


    def checkValid(self,left,right):
        if not left and not right:
            return True

        if not left or not right:
            return False

        if left.val != right.val:
            return False   

        return self.checkValid(left.left, right.right) and self.checkValid(left.right, right.left)                