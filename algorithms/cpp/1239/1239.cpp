class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<bitset<26>> bits; 
        for (auto s : arr) {
            bitset<26> a;
            for (char c : s) a.set(c - 'a'); // string convert to binary bit string
            if (a.count() == s.size()) bits.push_back(a); // remove ununique string
        }
        return maxLength(bits, bitset<26>(), 0);
    }
    
    int maxLength(vector<bitset<26>>& bits, bitset<26> bs, int index) {
        int res = bs.count();
        // & -> check two string has all different element
        // | -> same mean to concatenated two unique string together
        for (int i = index; i < bits.size(); i++) 
            if (!(bits[i] & bs).any()) res = max(res, maxLength(bits, bs | bits[i], i+1));
        
        return res;
    }
};