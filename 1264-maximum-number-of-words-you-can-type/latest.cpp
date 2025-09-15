class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        int w=0;
        vector<string> words=split(text);
        unordered_set<char> letters=lsplit(brokenLetters);
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            bool canType=true;
            for(char c:words[i]){
                if(letters.count(c)){
                    canType=false;
                    break;
                }
            }
            if(canType) w++;
        }
        return w;
    }
    vector<string> split(string text){
        vector<string> words;
        string t="";
        for(int i=0;i<text.size();i++){            
            if(text[i]==' '){
                words.push_back(t);
                t="";
            }
            t+=text[i];
        }
        if(!t.empty()) words.push_back(t);
        return words;
    }
    unordered_set<char> lsplit(string s){
        unordered_set<char> l;
        for(char c: s){
            l.insert(c);
        }
        return l;
    }
};