class Solution {
public:
    string intToRoman(int num) {
        char roman[] = {"IVXLCDM"};
        char sp[4];
        string result = "";
        int i, offset, red = 10000, div = 1000;
        for(i = 3; i >= 0; i--){
            sp[i] = num % red / div;
            red = div;
            div /= 10;
        }
        
        while(sp[3]--){
            result += roman[6];
        }
        
        for(i = 2; i >= 0; i--){
            offset = i<<1;
            if(sp[i] == 9){
                result += roman[offset];
                result += roman[offset+2];
                continue;
            }
            if(sp[i] == 4){
                result += roman[offset];
                result += roman[offset+1];
                continue;
            }
            if(sp[i] > 4){
                result += roman[offset+1];
                sp[i] -= 5;
            }
            while(sp[i]--){
                result += roman[offset];
            }
        }
        return result;
    }
};