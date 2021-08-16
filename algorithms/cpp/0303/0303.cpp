class NumArray {
public:    
    NumArray(vector<int>& nums) {
        _nums.clear();
        _nums.assign(nums.begin(), nums.end());
        // init array, O(n)
        for(int i = 1; i < nums.size(); i++)
            _nums[i] = _nums[i] + _nums[i - 1];        
    }
    //O(1)
    int sumRange(int left, int right) {
        if(left == 0) return _nums[right];
        else return _nums[right] - _nums[left - 1];        
    }
private:
    vector<int> _nums;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
