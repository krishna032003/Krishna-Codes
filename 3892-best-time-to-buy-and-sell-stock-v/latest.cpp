class Solution {
public:
    long long maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
    
    vector<long long> buy(k+1, -prices[0]);
    vector<long long> sell(k+1, 0);
    vector<long long> short_sell(k+1, prices[0]);
    vector<long long> buy_back(k+1, 0);
    
    for (int i = 1; i < n; i++) {
        for (int j = k; j >= 1; j--) {
            buy_back[j] = max(buy_back[j], short_sell[j] - prices[i]);
            short_sell[j] = max(short_sell[j], max(sell[j-1], buy_back[j-1]) + prices[i]);
            sell[j] = max(sell[j], buy[j] + prices[i]);
            buy[j] = max(buy[j], max(sell[j-1], buy_back[j-1]) - prices[i]);
        }
    }
    
    long long result = 0;
    for (int j = 1; j <= k; j++) {
        result = max({result, sell[j], buy_back[j]});
    }
    
    return result;
    }
};