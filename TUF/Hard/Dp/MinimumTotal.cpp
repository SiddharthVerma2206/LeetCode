class Solution {
public:
    int tabu(vector<vector<int>>& triangle, int m)
    {
        vector<vector<int>> dp(m + 1, vector<int>(m + 1, 0));
        
        dp[1][1] = triangle[0][0];
        
        for(int i = 2; i <= m ; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(j == 1) 
                {
                    dp[i][j] = triangle[i-1][j-1] + dp[i-1][j];
                } 
                else if(j == i) 
                {
                    dp[i][j] = triangle[i-1][j-1] + dp[i-1][j-1];
                } 
                else 
                {
                    dp[i][j] = triangle[i-1][j-1] + min(dp[i-1][j], dp[i-1][j-1]);
                }
            }
        }
        int minPathSum = dp[m][1];
        for (int j = 2; j <= m; ++j) 
        {
            minPathSum = min(minPathSum, dp[m][j]);
        }
        return minPathSum;    
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        return tabu(triangle, m);
    }
};