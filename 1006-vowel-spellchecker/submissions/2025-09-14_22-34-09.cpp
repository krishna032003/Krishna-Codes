class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(),wordlist.end());
        unordered_map<string,string> lo,vo;
        for(string w: wordlist){
            string l=toLower(w);
            string v=deVowel(l);
            if(!lo.count(l)) lo[l]=w;
            if(!vo.count(v)) vo[v]=w;
        }
    vector<string> res;
    for(string w: queries ){
        if(exact.count(w))
        {res.push_back(w);
        continue;
        }
        string l=toLower(w);
        string v=deVowel(l);
        if(lo.count(l)) res.push_back(lo[l]);
        else if(vo.count(v)) res.push_back(vo[v]);
        else res.push_back("");
    }
    return res;
    }
    string toLower(string s){
        for(char &c: s){
            c=tolower(c);
        }
        return s;
    }
    bool isVowel(char c){
        c=tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    string deVowel(string s){
        for(char &c : s){
            if(isVowel(c)){
                c='*';
            }

        }
        return s;
    }
};