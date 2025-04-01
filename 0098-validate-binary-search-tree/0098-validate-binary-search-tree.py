# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def validate(node, minValue, maxValue):
            if not node:
                return True
            
            # Node must be in the correct range
            if not (minValue < node.val < maxValue):
                return False
            
            # Recursively validate left and right subtrees
            leftIsValid = validate(node.left, minValue, node.val)
            rightIsValid = validate(node.right, node.val, maxValue)

            return leftIsValid and rightIsValid
        
        return validate(root, float('-inf'), float('inf'))