class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans+=abs((int)s[i]-(int)s[i+1]);
        }  
        return ans;      
    }
};