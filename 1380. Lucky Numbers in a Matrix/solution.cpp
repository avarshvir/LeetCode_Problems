class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> luckyNumbers;
        
        int m = matrix.size();     
        int n = matrix[0].size();  
        
        for (int i = 0; i < m; ++i) {
            int minInRow = matrix[i][0];
            int minInRowColIndex = 0;
            
            for (int j = 1; j < n; ++j) {
                if (matrix[i][j] < minInRow) {
                    minInRow = matrix[i][j];
                    minInRowColIndex = j;
                }
            }
            
            bool isMaxInCol = true;
            for (int k = 0; k < m; ++k) {
                if (matrix[k][minInRowColIndex] > minInRow) {
                    isMaxInCol = false;
                    break;
                }
            }
            
            if (isMaxInCol) {
                luckyNumbers.push_back(minInRow);
            }
        }
        
        return luckyNumbers;
    }
};