class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int n=nums.size();
        int a;
        vector<int> st;
        for(int num: nums)
        {
            st.push_back(num);
            while(st.size()>=2){
            int a=st.back();
            st.pop_back();
            int b=st.back();
            st.pop_back();
            
            if(gcd(a,b)>1){
                int n=lcm(a,b);
                st.push_back(n);
            }
            else{
                st.push_back(b);
                st.push_back(a);
                break;
            }
            }
            
        }
        return st;
    }
    int gcd(int a,int b){
        int m=max(a,b);
        int n=min(a,b);
        int temp;
        while(n!=0){
            temp=m%n;
            m=n;
            n=temp;
        }
        return m;
    }
    int lcm(int a,int b){
        return (a/gcd(a,b))*b;
    }
};