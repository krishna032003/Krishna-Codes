class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)
        return 0;
        int count[256]={0};
        for(int i=0;i<n1;i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(count[i]!=0)
            return 0;
        }
        return 1;
    }
};