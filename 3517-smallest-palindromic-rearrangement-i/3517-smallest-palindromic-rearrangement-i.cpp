class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> cnt(26,0);
        int n=s.length();
        bool flag=0;
        if(n%2!=0) flag=true;
        for(auto it:s){
            cnt[it-'a']++;
        
        }
        string ans;
        char a;
        for(int i=0;i<26;i++){
            while(cnt[i]>1){char c='a'+i;
            ans.push_back(c);
            cnt[i]-=2;
        }
        if(cnt[i]==1) a='a'+i;
        }
        string rev=ans;
        reverse(rev.begin(),rev.end());
        if(flag) ans.push_back(a);
        ans+=rev;
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna