# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root:
            return False

        stack = [root]  # Stack stores only nodes
        sum_stack = [targetSum - root.val]  # Separate sum tracker

        while stack:
            node = stack.pop()
            curr_sum = sum_stack.pop()

        # If it's a leaf node and sum matches targetSum
            if not node.left and not node.right and curr_sum == 0:
                return True

        # Push right child if exists
            if node.right:
                stack.append(node.right)
                sum_stack.append(curr_sum - node.right.val)

        # Push left child if exists
            if node.left:
                stack.append(node.left)
                sum_stack.append(curr_sum - node.left.val)

        return False      

