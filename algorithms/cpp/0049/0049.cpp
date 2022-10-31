class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> strs_sort(strs);
        unordered_map<string, vector<string>> map_ans;
        vector<vector<string>> ans;
        
        for(int i = 0; i < strs.size(); i++)
            sort(strs_sort[i].begin(), strs_sort[i].end());
        
        for(int i = 0; i < strs.size(); i++){
            if(map_ans.find(strs_sort[i]) == map_ans.end())
                map_ans[strs_sort[i]] = vector<string>();
            map_ans[strs_sort[i]].push_back(strs[i]);
        }
        
        for(auto& it : map_ans)
            ans.push_back(it.second);
        
        return ans;
    }
};