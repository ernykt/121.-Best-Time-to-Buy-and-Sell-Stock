class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
      //we need at least 2 days to make profit.
        if (n < 2) return 0;
        int max_profit = 0;
        int min_price = prices[0];
        for (int i = 1; i < n; i++) {
            if (prices[i] > min_price) {
                max_profit = max(max_profit, prices[i] - min_price);
            } else {
                min_price = prices[i];
            }
        }
        return max_profit;
    }
};
