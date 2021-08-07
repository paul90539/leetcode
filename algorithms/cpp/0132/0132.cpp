class Solution {
public:
    int minCut(string s) {
        
        int size = s.size();
        vector<int> dp(size+1, 0);

        for(int i = 0; i <= size; i++) 
            dp[i] = i-1;
 
        for(int i = 0; i < size; i++) {
            
            // odd length palindrome
            for(int j = 0; i-j >= 0 && i+j < size && s[i+j] == s[i-j];j++)
                dp[i+j+1] = min(dp[i+j+1], dp[i-j]+1);

            // even length palindrome
            for(int j = 0; i-j-1 >= 0 && i+j < size && s[i+j] == s[i-j-1]; j++)
                dp[i+j+1] = min(dp[i+j+1], dp[i-j-1]+1);
        }
        
        return dp[size];
    }
};

/*
        
The definition of 'dp' array is the minimum number of cuts of a sub string. More specifically, dp[n] stores the cut number of string s[0, n-1]. 
  
Initialize the 'dp' array: For a string with n characters s[0, n-1], it needs at most n-1 cut. Therefore, the 'dp' array is initialized as dp[i] = i-1
        
    // The external loop variable 'i' represents the center of the palindrome.
    // means i is centre and starts from i-j and ends at i+j odd length
    // and i-j and i + j +1 for even length , just check both best will get updated
    
The internal loop variable 'j' represents the 'radius' of the palindrome. 
Apparently, j <= i is a must.
This palindrome can then be represented as s[i-j, i+j]. 
If this string is indeed a palindrome, then one possible value of dp[i+j] is dp[i-j] + 1, 
where dp[i-j] corresponds to s[0, i-j-1] and 1 correspond to the palindrome s[i-j, i+j];
       
        
*/
