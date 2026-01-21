class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2) return 0;
        vector<int> lmin(n),rmax(n);
        lmin[0]=prices[0];
        for(int i=1;i<n;i++){
            lmin[i]=min(prices[i],lmin[i-1]);
        }
        rmax[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(prices[i],rmax[i+1]);
        }
        int profit=0;
        for(int i=0;i<n;i++){
            profit=max(profit,rmax[i]-lmin[i]);
        }
        return profit;
    }
};