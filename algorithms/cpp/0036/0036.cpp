class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowCheck[9][9] = {0}, colCheck[9][9] = {0}, boxCheck[9][9] = {0};
        int num, box;
        //O(n^2)
        for(int row = 0; row < board.size(); row++)
            for(int col = 0; col < board[row].size(); col++)
                if(board[row][col] != '.')
                {
                    num = board[row][col] - '0' - 1;
                    box = row / 3 * 3 + col / 3;
                    if(rowCheck[row][num] || colCheck[col][num] || boxCheck[box][num])
                        return false;
                    rowCheck[row][num] = colCheck[col][num] = boxCheck[box][num] = 1;
                }
        
        return true;        
    }
};
