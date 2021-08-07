class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int m = nums1.size();
        int n = nums2.size();
        
        // use minimum length vector to slove problem
        if(m > n)
            return findMedianSortedArrays(nums2, nums1);
        
        // Binray Search, O(log(min(num1, num2)))
        int l = 0, r = m;
        while(l <= r){
            int partx = l + (r - l) / 2;
            int party = (m + n + 1) / 2 - partx;
            int maxlx = (partx == 0) ? INT_MIN: nums1[partx-1];
            int minrx = (partx == m) ? INT_MAX: nums1[partx];
            int maxly = (party == 0) ? INT_MIN: nums2[party-1];
            int minry = (party == n) ? INT_MAX: nums2[party];
            if(maxlx <= minry && maxly <= minrx){
                if((m + n) % 2 == 0)
                    return (double)(max(maxlx, maxly) + min(minrx, minry)) / 2;
                else
                    return (double)(max(maxlx, maxly));
            }else if(maxlx > minry)
                r = partx - 1;
            else
                l = partx + 1;
        }
        return -1.0;        
    }
};
