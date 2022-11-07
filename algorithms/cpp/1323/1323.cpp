class Solution {
public:
    int maximum69Number (int num) {
        if((int)(num * 0.001) == 6) return num + 3000;
        else if((int)(num * 0.01)%10 == 6) return num + 300;
        else if((int)(num * 0.1)%10 == 6) return num + 30;
        else if((int)(num)%10 == 6) return num + 3;
        else return num;
    }
};