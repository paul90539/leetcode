class Solution {
public:
    int lengthOfLongestSubstring(string s) {    
        queue<char> charQueue;
        int sLength = s.size(), resultLength = 0, currLength = 0;
        char checkTable[127] = {0}, cBit, headBit;
        
        for(int index = 0; index < sLength; index++){            
            cBit = s[index];
            
            if(checkTable[cBit] == 1){
                resultLength = currLength > resultLength ? currLength : resultLength;
                
                while( currLength > 0){
                    headBit = charQueue.front();
                    charQueue.pop();
                    currLength--;
                    checkTable[headBit] = 0;
                    if(headBit == cBit) break;
                }
            }            
            charQueue.push(cBit);
            checkTable[cBit] = 1;
            currLength++;
        }        
        resultLength = currLength > resultLength ? currLength : resultLength;
        
        return resultLength;
    }
};
