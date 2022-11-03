class Solution {
public:
    // ver.3 O(n + 26 * 26), 249ms, Space less than 20.85%
    int longestPalindrome(vector<string>& words) {
        constexpr int alphabet_size = 26;
        int i, k;
        vector count(alphabet_size, vector<int>(alphabet_size));
        for (const string& word : words) {
            count[word[0] - 'a'][word[1] - 'a']++;
        }
        int answer = 0;
        bool central = false;
        for (i = 0; i < alphabet_size; i++) {
            if ( count[i][i] & 0x1 ) {
                answer += count[i][i] - 1;
                central = true;
            } else {
                answer += count[i][i];
            }
            for (k = i + 1; k < alphabet_size; k++) {
                answer += (min(count[i][k], count[k][i]) << 1);
            }
        }
        if (central) {
            answer++;
        }
        return answer << 1;
    }

    /* 
    // ver.2 O(n * n), 508ms, Space less than 95.08%
    int longestPalindrome(vector<string>& words) {
        int i, k;
        int n = words.size();
        char odd = 0;
        int pos_cnt, neg_cnt, pair_cnt = 0;
        string pos_str = {' ', ' '};
        
        for(i = 0; i < n; i++){
            pos_cnt = 0, neg_cnt = 0;
            if(words[i][0] == 0x1) continue;
            
            pos_str[0] = words[i][0];
            pos_str[1] = words[i][1];
            
            if(pos_str[0] == pos_str[1]){
                for(k = i; k < n; k++){
                    if(words[k][0] == 0x1) continue;

                    if(pos_str[0] == words[k][0] && pos_str[1] == words[k][1])
                        pos_cnt++, words[k][0] = 0x1;
                }
                
                if( pos_cnt & 0x1 ) odd = 1;
                pair_cnt += (pos_cnt & 0x7ffffffe);
            }
            
            else{
                for(k = i; k < n; k++){
                    if(words[k][0] == 0x1) continue;

                    if(pos_str[0] == words[k][0] && pos_str[1] == words[k][1])
                        pos_cnt++, words[k][0] = 0x1;
                    if(pos_str[1] == words[k][0] && pos_str[0] == words[k][1])
                        neg_cnt++, words[k][0] = 0x1;
                }
                
                pair_cnt += (min(pos_cnt, neg_cnt) << 1);
            }
        }   
        return ((pair_cnt + odd) << 1);
    }
    */

    /*
    // ver.1 O(n * n), 523ms
    int longestPalindrome(vector<string>& words) {
        int i, k;
        int n = words.size();
        vector<char> visited(n, 0);
        char odd = 0;
        int pos_cnt, neg_cnt, pair_cnt = 0;
        string pos_str = {' ', ' '};
        
        for(i = 0; i < n; i++){
            pos_cnt = 0, neg_cnt = 0;
            if(visited[i] == 1) continue;
            
            pos_str[0] = words[i][0];
            pos_str[1] = words[i][1];
            
            for(k = i; k < n; k++){
                if(visited[k] == 1) continue;
                
                if(pos_str[0] == words[k][0] && pos_str[1] == words[k][1])
                    pos_cnt++, visited[k] = 1;
                if(pos_str[1] == words[k][0] && pos_str[0] == words[k][1])
                    neg_cnt++, visited[k] = 1;
            }
            
            if(pos_str[0] == pos_str[1]){
                if( pos_cnt & 0x1 ) odd = 1;
                pair_cnt += (pos_cnt & 0x7ffffffe);
            }
            else{
                pair_cnt += (min(pos_cnt, neg_cnt) << 1);
            }
        }   
        return ((pair_cnt + odd) << 1);
    }
    */
};