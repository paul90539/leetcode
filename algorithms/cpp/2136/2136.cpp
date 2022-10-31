class Solution {
public:
    typedef struct flower_s{
        int plant;
        int grow;
    } flower_t;
    
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int i, n = plantTime.size();
        int result = 0, plant_sum = 0;
        vector<flower_t> flower(n, (flower_t){.plant = 0, .grow = 0});
        
        for(i = 0; i < n; i++){
            flower[i].plant = plantTime[i];
            flower[i].grow  = growTime[i];
        }
        
        sort(flower.begin(), flower.end(), [](flower_t& a, flower_t& b){
            return a.grow > b.grow;
        });
        
        for(i = 0; i < n; i++){
            plant_sum += flower[i].plant;
            result = std::max( result, plant_sum + flower[i].grow );
        }
        
        return result;
    }
};