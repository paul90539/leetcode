class Solution {
public:
    string countAndSay(int n) {
        string str = "1", next = str;
        int i, s, same, lens;
        for(i = 2; i <= n; i++){
            same = 1;
            next = "";
            lens = str.length();
            for(s = 0; s < lens; s++){
                if(s+1 < lens && str[s] == str[s+1]){
                    same++;
                }
                else{
                    // 1. this way spend time: 0 ms
                    next +='0'+same;
                    next += str[s];
                    // 2. this way spend time: 7 ms
                    //next += to_string(same) + str[s];
                    // 3. this way spend time: 121 ms
                    //next = next + to_string(same) + str[s];
                    same = 1;
                }
            }
            str = next;
        }
        return str;
    }
};