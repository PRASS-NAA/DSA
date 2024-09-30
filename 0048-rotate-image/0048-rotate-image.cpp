class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Step 1: Transpose the matrix
        for(int i = 0; i < rows; i++) {
            for(int j = i + 1; j < cols; j++) {
                // Swap matrix[i][j] with matrix[j][i]
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Step 2: Reverse the columns (symmetrical column swap)
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols / 2; j++) {
                // Swap the elements in the current row
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][cols - j - 1];
                matrix[i][cols - j - 1] = temp;
            }
        }
    }
};
