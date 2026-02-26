# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque
class Solution:
    def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:

        q = deque()

        q.append((root,0,0))

        ans = []

        ans_map = {}

        while q:

            curr_node, index, level = q.popleft()

            if index in ans_map:
                ans_map[index].append((curr_node.val,level))
            else:
                ans_map[index] = []
                ans_map[index].append((curr_node.val,level))    

            if curr_node.left:
                q.append((curr_node.left, index - 1, level + 1 ))

            if curr_node.right:
                q.append((curr_node.right, index + 1 ,level + 1)) 

        for col in sorted(ans_map.keys()):
            column_nodes = sorted(ans_map[col], key=lambda x: (x[1], x[0]))
            ans.append([val for val, lvl in column_nodes])

        return ans    


        