# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        self.flag = False

        if root is None:
            return False

        targetSum -= root.val


        if not self.flag:
            self.hasPathSum(root.left,targetSum)
            if not self.flag:
                self.hasPathSum(root.right, targetSum)

            if root.right is None and root.left is None and not self.flag:
                if targetSum== 0:
                    self.flag = True
                else:
                    targetSum += root.val    


        return self.flag                