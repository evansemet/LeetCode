class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit(0), min(prices[0]);
        for (size_t i(0); i < prices.size(); ++i) {
            if (prices[i] < min) {
                min = prices[i];
            }
            if (prices[i] - min > profit) {
                profit = prices[i] - min;
            }
        }
        return profit;
    }
};
