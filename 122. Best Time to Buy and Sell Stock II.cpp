

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0;
        int hold = INT_MIN;
        for (int i=0;i<prices.size();i++) {
            sell = max(sell, hold + prices[i]);
            hold = max(hold, sell - prices[i]);
        }
        return sell;
    }
};