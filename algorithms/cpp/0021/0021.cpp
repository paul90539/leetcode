class Solution {
public:
    bool checkIfPangram(string sentence) {
        int lens = sentence.length();
        int i;
        char alphabets[26];
        memset(alphabets, 0, 26);
        
        for(i = 0; i < lens; i++){
            alphabets[sentence[i] - 'a'] = 1;
        }
        
        for(i = 0; i < 26; i++){
            alphabets[0] = alphabets[0] & alphabets[i];
        }
        
        return alphabets[0] == 1;
    }
};