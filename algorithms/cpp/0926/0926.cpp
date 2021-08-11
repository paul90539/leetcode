class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int counterFlip = 0, counterOne = 0;
        //O(n)
        for (auto ch : s) {
            if (ch == '1') {
                ++counterOne;
            } else {
                ++counterFlip;
            }
            counterFlip = std::min(counterOne, counterFlip);
        }
        return counterFlip;    
    }
};
