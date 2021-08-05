class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxResult = 0, l = 0, r = height.size() - 1;
        // O(n)
        while(l < r){
            maxResult = max(maxResult, min(height[l], height[r]) * (r - l));
            if(height[l] < height[r]) l++;
            else r--;
        }
        return maxResult;
    }
};
