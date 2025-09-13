class Solution {
public:
    int sumBase(int n, int k) {
        int b=0;
        while(n!=0){
            b+=n%k;
            n/=k;
        }
        
        return b;
    }
};