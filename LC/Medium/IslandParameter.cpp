class Solution {
    public:
        int islandPerimeter(vector<vector<int>>& grid) {
            int out = 0;
            for (int i = 0; i < grid.size(); ++i) {
                for (int j = 0; j < grid[0].size(); ++j) {
                    if (grid[i][j] == 1) {
                        out += 4; 
                        if(i > 0 && grid[i - 1][j] == 1){
                        out -= 2; 
                        } 
                        if(j > 0 && grid[i][j - 1] == 1){
                        out -= 2; 
                        } 
                    }
                }
            }
            return out;
        }
    };