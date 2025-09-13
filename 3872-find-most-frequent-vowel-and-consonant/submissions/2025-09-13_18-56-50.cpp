class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> v,con ;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isVowel(s[i]))
                v[s[i]]++;
            else
                con[s[i]]++;
        
        }
        return (getmax(v)+getmax(con)); 
    


    }
    static bool comp(const pair<char,int> &v1,const pair<char,int> &v2){
        return v1.second<v2.second;
    }
    int getmax(const unordered_map<char,int> &v1){
        if(v1.empty())
        return 0;
        auto it = max_element(v1.begin(),v1.end(),comp);
        return it->second;
    }
    bool isVowel(char c){
        switch(c){
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
            return true;
        default: return false;
        }
    }
};