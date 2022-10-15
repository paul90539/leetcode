class Solution {
public:
    int getLengthOfOptimalCompression(string s, int k) {
        n = s.length();
        this->s = s;
        //memcpy(this->s, s.c_str(), n);
        dp.assign(n, vector<char>( k + 1, -1 ) );
        
        return run_dp(0, k);
    }
private:
    char n;
    string s;
    //char s[100];
    vector<vector<char>> dp;
    
    char run_dp(char i, char k){
        if(k < 0) return n; 
        if(i + k >= n) return 0; // done or delete all
        
        char ans = dp[i][k];
        if(ans != -1) return ans;
        ans = run_dp(i + 1, k - 1); // delete s[i]
        
        char j;
        char lens = 0;
        char same = 0;
        char diff = 0;
        char next = 0;
        for(j = i; j < n && diff <= k; j++){
            if(s[j] == s[i]){
                same++;
                if(same <= 2 || same == 10 || same == 100) lens++;
            }
            else{
                diff++;
            }
            // if 'min' function is marco, pre-calculator value is better
            // std::min is not a marco function
            next = lens + run_dp(j + 1, k - diff);
            ans  = min(ans, next); 
        }
        dp[i][k] = ans;
        return ans;
    }
};
