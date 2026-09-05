class Solution {
public:
//MEMOIZATION
    int lcs(const string &s1,const string &s2,int m,int n,vector<vector<int>> &memo){
        if(memo[m][n]!=-1)
        return memo[m][n];
        if(n==0 || m==0)
        memo[m][n]=0;
        else{
            if(s1[m-1]==s2[n-1])
            memo[m][n]=1+lcs(s1,s2,m-1,n-1,memo);
            else
            memo[m][n]=max(lcs(s1,s2,m-1,n,memo),lcs(s1,s2,m,n-1,memo));
        }
        return memo[m][n];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int m=s.length();
        vector<vector<int>> memo(m+1,vector<int>(m+1,-1));
        return lcs(s,t,m,m,memo);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna