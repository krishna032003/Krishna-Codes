class Solution {
public:
    bool doesAliceWin(string s) {
        int n=s.length();        
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                return 1;
            }
        }
        return 0;
    }
    bool isVowel(char c){
        switch(c) {
            case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
                return true;
            default : return false;    
        }
    }
};