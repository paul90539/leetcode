class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        int i, j, prev;
        int mod = 1000000007;
	    vector<int> dp1(target + 1);
        vector<int> dp2(target + 1);
        dp1[0] = 1;
        for(i = 1; i <= d; i++) {
            prev = dp1[0];
            for(j = 1; j <= target; j++) {
                dp2[j] = prev;
                prev = (prev+ dp1[j]) % mod;
                if(j >= f) 
                    prev = (prev - dp1[j - f] + mod) % mod;
            }
            swap(dp1, dp2);
            dp2[0] = 0;
        }
        return dp1[target];
    }
};