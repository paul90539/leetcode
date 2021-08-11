class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        if(arr.size() == 0) return true;
        //O(n*log(n))
        sort(arr.begin(), arr.end(), [](int& a, int& b){ return abs(a) == abs(b) ? a < b : abs(a) < abs(b);} );
        int slower = 0, faster = 1, counter = 0;
        
        // O(n)
        while (faster < arr.size()){
            if( arr[slower] == INT_MIN ){
                slower++;
                continue;
            }
            if( slower == faster ) faster++;
            
            if( (arr[slower] + arr[slower]) == arr[faster]){
                arr[faster] = INT_MIN;
                faster++, slower++, counter++;
            }
            else{
                faster++;
            }
        }
        
        if((counter + counter) == arr.size() ) return true;
        else return false;
    }
};
