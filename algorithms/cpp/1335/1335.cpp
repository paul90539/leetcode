class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        
        int n = jobDifficulty.size();
        int inf = 1e6;
        int i, j, k, today;
        vector<vector<int>> dp(n + 1, vector<int>(d + 1, inf) );
        
        if(n < d) return -1;
        
        dp[0][0] = 0;
        for(i = 1; i <= n; i++){
            for(k = 1; k <= d; k++){
                today = 0;
                for(j = i - 1; j >= k - 1; j--){
                    today = max(today, jobDifficulty[j]);
                    dp[i][k] = min(dp[i][k], dp[j][k - 1] + today );   
                }
            }
        }
        return dp[n][d];
    }
};