class StockSpanner {
public:
    StockSpanner() {
        stack.clear();
        stack.push_back({10e5+1, 1});
    }
    
    int next(int price) {
        int cnt = 1;
        while( stack.back().first <= price ){
            cnt += stack.back().second;
            stack.pop_back();
        }
        stack.push_back({price, cnt});
        return cnt;
    }
private:
    vector<pair<int, int>> stack;
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */