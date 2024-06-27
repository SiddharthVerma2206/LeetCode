class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int result =0 ;

        for(int i=0 ; i<rows ; i++){
            for(int j=0 ; j<cols ; j++){
                if(grid[i][j]==1){
                    result = max(result , dfs(grid , i , j , rows , cols));
                }
            }
        }
        return result;
    }

private:
    int dfs(vector<vector<int>>& grid , int i , int j , int row , int col){
        if(i<0 || i>=row || j<0 || j>=col || grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0;

        return (1 + dfs(grid , i+1 , j , row , col) + dfs(grid , i-1 , j , row , col) + 
        dfs(grid , i , j+1 , row , col) + dfs(grid , i , j-1 , row , col));
    }
};