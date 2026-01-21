class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxprofit=0;
        for(int price: prices){
            mini=min(mini,price);
            maxprofit=max(maxprofit,price-mini);
        }
        return maxprofit;
    }
};