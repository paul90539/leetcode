class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        int r, c;
        for(r = 1; r < rows; r++){
            for(c = 1; c < cols; c++){
                if(matrix[r][c] != matrix[r-1][c-1]) return false;
            }
        }
        return true;
    }
};