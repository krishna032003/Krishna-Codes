class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        if(x==0 || x==1)
        return x;
        for(long long i=0;i<=x/2;i++){
            
            if (i*i>x)
            break;
            ans=i;
        }
        return ans;
    }
};