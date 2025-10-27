class Solution {
public:
    int totalMoney(int n) {
        int a=1,b=1,ans=0;
        for(int i=0;i<n;i++){
            ans+=a;
            a++;
            if((i+1)%7==0){
                b++;
                a=b;
            }
        }
        return ans;
    }
};