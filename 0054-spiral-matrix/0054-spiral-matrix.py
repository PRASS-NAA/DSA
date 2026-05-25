class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        ans = []

        m = len(matrix)
        n = len(matrix[0])

        top = 0
        bottom = m - 1
        left = 0
        right = n - 1

        while(top <= bottom and left <= right):
            #step 1 traverse the top row from left to right
            for i in range(left, right+1):
                ans.append(matrix[top][i])
            top += 1

            #step 2 traverse the right column from top to bottom
            for i in range(top, bottom+1):
                ans.append(matrix[i][right])
            right -= 1

            #step 3 traverse the bottom row from right to left    
            if top <= bottom:
                for i in range(right, left-1, -1):
                    ans.append(matrix[bottom][i])
            bottom -= 1

            #step 4 traverse left column from bottom to top
            if left<=right:
                for i in range(bottom, top-1, -1):
                    ans.append(matrix[i][left])
            left +=1

        return ans                    

        