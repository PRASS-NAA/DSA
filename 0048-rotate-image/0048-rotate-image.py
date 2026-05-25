class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """

        #transpose the matrix

        row = len(matrix)
        col = len(matrix[0])

        for i in range(0,row):
            for j in range(i+1, col):
                temp = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = temp
        

        #reverse the columns

        for i in range(0,row):
            fullrow = matrix[i]

            left = 0
            right = len(fullrow) - 1

            while( left <= right):
                temp = fullrow[left]
                fullrow[left] = fullrow[right]
                fullrow[right] = temp
                left += 1
                right -= 1

            matrix[i] = fullrow    