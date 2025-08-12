class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        if(x==0 || x==1)
        return x;
        for(int i=0;1LL*i*i<=x;i++){
            ans=i;
        }
        return ans;
    }
};