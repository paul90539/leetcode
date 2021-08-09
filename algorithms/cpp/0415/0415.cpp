class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.length() > num2.length()) return addStrings(num2, num1);
        
        string ans = "";
        int count1 = num1.length() - 1;
        int count2 = num2.length() - 1;
        char val, carryBit = 0;
        
        //O(n)
        while(count2 >= 0){            
            val = count1 < 0 ? 0 : num1[count1] - '0';
            val += num2[count2] - '0' + carryBit;            
            
            if(val > 9) carryBit = 1, val -= 10;
            else        carryBit = 0;            
            ans += (val + '0');
                        
            count1--, count2--;
        }        
        if(carryBit == 1) ans += '1';
                
        std::reverse(begin(ans), std::end(ans));
        return ans;
    }
};
