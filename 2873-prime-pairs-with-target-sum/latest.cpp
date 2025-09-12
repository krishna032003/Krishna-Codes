class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        int y;
        for(int x=2;x<=n/2;x++){
            y=n-x;
            if(x<=y && (x+y)==n && isPrime(x) && isPrime(y))
            ans.push_back({x,y});
            }
            
        
        return ans;
    }
    bool isPrime(int n){
        if(n<=1) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return 0;
        }
        return 1;
    }
};