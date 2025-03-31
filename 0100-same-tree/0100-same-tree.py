# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        stk1, stk2 = [], []
        curr1, curr2 = p, q

        while stk1 or stk2 or curr1 or curr2:
            while curr1 or curr2:
                if not curr1 or not curr2:  # One is None while the other is not
                    return False
                if curr1.val != curr2.val:  # Different values
                    return False

                stk1.append(curr1)
                stk2.append(curr2)
                curr1, curr2 = curr1.left, curr2.left

            if stk1 and stk2:
                curr1, curr2 = stk1.pop(), stk2.pop()
            else:
                return False  # One stack is empty while the other is not (structure mismatch)

            curr1, curr2 = curr1.right, curr2.right

        return True