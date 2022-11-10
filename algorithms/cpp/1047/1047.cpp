class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0, sn = -1;
        int n = s.length();
        string stack;

        stack.reserve(n);
        stack.resize(n);

        for(i = 0; i < n; i++){
            if(sn == -1 || stack[sn] != s[i]){
                sn++;
                stack[sn] = s[i];
            }
            else{
                stack[sn] = 0;
                sn--;
            }
        }
        
        stack.resize(sn+1);
        return stack;
    }
};