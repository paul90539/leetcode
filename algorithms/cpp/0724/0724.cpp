class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i, l, r, sum, size = nums.size();
        vector<int> integral = nums;
        for(i = 1; i < size; i++){
            integral[i] = integral[i] + integral[i-1];
        }
        sum = integral[size-1];
        for(i = 0; i < size; i++){
            l = integral[i] - nums[i];
            r = sum - integral[i];
            if(l == r) return i;
        }
        return -1;
    }
};