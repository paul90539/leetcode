class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> hashmap;
        vector< pair<string, int> > pair_order;
        vector<string> result;
        int count;
        
        for(string& word : words) {
            hashmap[word] += 1;
        }
        
        count = 0;
        for(auto& h : hashmap){
            pair_order.push_back(pair<string, int>(h.first, h.second));
            count++;
        }
        
        struct {
            bool operator()(pair<string, int>& a, pair<string, int>& b) const {
                if( a.second == b.second ){
                    return a.first < b.first;
                }
                else{
                    return a.second > b.second; 
                }
            }
        } compare_pair;
        
        sort(pair_order.begin(), pair_order.begin()+count, compare_pair);
        
        for(count = 0; count < k; count++){
            result.push_back(pair_order[count].first); // faster
            //result[count] = pair_order[count].first; // slower
        }
        
        return result;
    }
};