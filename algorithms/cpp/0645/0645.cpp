class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size(), dup = -1, mis = -1;
        for ( int index = 0; index < len; ++index )
        {
            if ( nums[abs(nums[index]) - 1] < 0 )
                dup = abs(nums[index]);
            else nums[abs(nums[index]) - 1] *= -1;
        }
        
        for ( int index = 0; index < len; ++index )
        {
            if ( nums[index] > 0 )
            {
                mis = index + 1;
                break;
            }
        }
        return {dup, mis};
    }
};