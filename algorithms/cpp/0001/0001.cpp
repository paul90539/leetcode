class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mapComplex; // unordered map = hash table
        vector<int> result(2, 0);
        
        // loop all numbers, O(n)
        for(int index = 0; index < nums.size(); index++){
            
            // hash table's search is O(1)
            if(mapComplex.find(nums[index]) != mapComplex.end()){
                result[0] = mapComplex[nums[index]];
                result[1] = index;
                return result;
            }
            else{
                mapComplex[target - nums[index]] = index;
            }
        }
        return result;
    }
};
