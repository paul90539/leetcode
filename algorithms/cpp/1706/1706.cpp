class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int r, c, curr;
        int rows = grid.size(), cols = grid[0].size();
        vector<int> position(cols, 0);

        for(c = 0; c < cols; c++){
            position[c] = c;
        }
            
        for(r = 0; r < rows; r++){
            for(c = 0; c < cols; c++){
                curr = position[c];
                if(curr == -1) continue;
                else if(curr == 0 && grid[r][curr] == -1){
                    position[c] = -1;
                }
                else if(curr == cols - 1 && grid[r][curr] == 1){
                    position[c]= -1;
                }
                else if((grid[r][curr] + grid[r][curr + grid[r][curr]]) != 0){
                    position[c] += grid[r][curr];
                }
                else{
                    position[c] = -1;
                }
            }
        }
        return position;
    }
};