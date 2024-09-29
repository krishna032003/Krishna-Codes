class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;
        else{
            int dig;
            int res=0;
            int og=x;
            while(x!=0)
            {
                dig=x%10;
                x/=10;
                if(res>INT_MAX/10||res<INT_MIN/10)
                return 0;
                res=res*10+dig;

            }
            if(res==og)
            return 1;
            else return 0;
        }
    }
};