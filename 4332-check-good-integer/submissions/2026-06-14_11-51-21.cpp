class Solution {
public:
    bool sum(int n){
        int dig=0,sq=0,sum=0;
        while(n){
            dig=n%10;
            sq+=(dig*dig);
            sum+=dig;
            n/=10;
        }
        if(sq-sum>=50)
            return true;
        return false;
    }
    bool checkGoodInteger(int n) {
        return sum(n);
    }
};