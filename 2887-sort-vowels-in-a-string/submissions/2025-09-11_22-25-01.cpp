class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        string r=s;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isVowel(r[i]))
            v.push_back(r[i]);
        }
        sort(v.begin(),v.end());
        int idx=0;
        for(int i=0;i<n;i++){
            if(isVowel(r[i])){
                r[i]=v[idx++];
            }
        }
        return r;
    }
    bool isVowel(char c){
        switch(c) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                return true;
            default:
                return false;
        }
    }
};