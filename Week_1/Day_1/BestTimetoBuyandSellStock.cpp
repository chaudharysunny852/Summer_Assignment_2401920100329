class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimumPrice =     prices[0];
        int maxiProfit = 0;
        for (int i = 1; i < prices.size(); i++) 
        {
            maxiProfit   = max(maxiProfit, prices[i] - minimumPrice);
            minimumPrice = min(minimumPrice, prices[i]);
        }


        return maxiProfit;
    }
};
