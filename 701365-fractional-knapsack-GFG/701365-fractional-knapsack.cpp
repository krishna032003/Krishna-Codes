class Solution {
  public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b){
        double r1=(double)a.first/a.second;
        double r2=(double)b.first/b.second;
        return r1>r2;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<int,int>> items;
        int n=val.size();
        for(int i=0;i<n;i++){
            items.push_back({val[i],wt[i]});
        }
        sort(items.begin(),items.end(),cmp);
        double res=0;
        for(auto item:items){
            int val=item.first;
            int wt=item.second;
            if(wt<=capacity){
                res+=val;
                capacity-=wt;
            }
            else
            {
                res+=((double)val/wt)*capacity;
                break;
            }
        }
        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna