class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result = nums;
        int i, size;
        size = result.size();
        for(i = 1; i < size; i++){
            result[i] += result[i-1];
        }
        return result;
    }
};