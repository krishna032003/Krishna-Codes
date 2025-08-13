class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 || n==1)
        return n;
        if(n%3==0){
            for(long long i=3;i<=n;i*=3){
                if(i==n)
                return 1;
            }
        }
        return 0;
    }
};