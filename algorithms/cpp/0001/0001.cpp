class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //sort array O(n*log(n))
        vector<int> temp(nums.begin(), nums.end());
        sort(temp.begin(), temp.end());
        
        int i = 0, j = temp.size() - 1;
        vector<int> res;
        
        //find two number O(n)
        while (i < j) {
            int s = temp[i] + temp[j];
            if (s == target) {
                res = {temp[i], temp[j]};                
                break;
            }
            if (s < target) i++;
            else j--;
        }
        
        //find first number's locate O(n)
        for (i = 0; i < nums.size(); i++) {
            if (res[0] == nums[i]) {
                res[0] = i;
                break;
            }
        }
        
        //find second number's locate O(n)
        for (i = 0; i < nums.size(); i++) {
            if (i != res[0] && res[1] == nums[i]) {
                res[1] = i;
                break;
            }
        }        
        return res;
    }
};
