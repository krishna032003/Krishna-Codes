class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="") return 1;
        int l=0,r=0;
        bool sub=0;
        for(int i=0;i<t.length();i++){
            if(s[l]==t[r] && l<=s.length()){
                l++;
                r++;
                if(l==s.length())
                sub=1;
            }
            else{
                r++;
            }
        }
        return sub;
    }
};