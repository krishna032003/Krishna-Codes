class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0, r=0, ones=0, n=s.size(), minlen=INT_MAX;
        string ans="";
        while(r<n){
            if(s[r]=='1') ones++;
            while(ones==k){
                if(r-l+1<=minlen){
                    if(r-l+1==minlen){
                        if(ans>s.substr(l,r-l+1)) ans=s.substr(l,r-l+1);
                    }
                    else ans=s.substr(l,r-l+1);
                    minlen=r-l+1;
                }
                if(s[l]=='1') ones--;
                l++;
            }
            r++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna