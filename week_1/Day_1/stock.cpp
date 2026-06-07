class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        for(int buy = 0; buy < prices.size(); buy++) {
            for(int sell = buy + 1; sell < prices.size(); sell++) {
                int profit = prices[sell] - prices[buy];

                if(profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }

        return maxProfit;
    }
};