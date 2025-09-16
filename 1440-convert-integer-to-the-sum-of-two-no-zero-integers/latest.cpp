class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        int l,r;
        for(int i=1;i<n;i++){
            l=i;
            r=n-i;
            if(noZero(l) && noZero(r)){
                return {l,r};
            }
            l++;
            r--;
        }
        return {0};
    }
    bool noZero(int n){
        if(n==0)
        return 0;
        while(n!=0){
            int dig=n%10;
            n/=10;
            if(dig==0){
                return 0;
            }
        }
        return 1;
    }
};