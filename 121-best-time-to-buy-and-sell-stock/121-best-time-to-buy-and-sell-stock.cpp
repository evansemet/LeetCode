class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, low = prices[0];
        for (int price : prices) {
            profit = max(profit, price - low);
            low = min(price, low);
        }
        return profit;
    }
};