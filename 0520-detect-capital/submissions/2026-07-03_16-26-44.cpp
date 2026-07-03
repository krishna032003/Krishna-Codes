class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int count=0;

        for(char c: word){
            if (c>='A' && c<='Z'){
                count++;

            }
            
        }
        return count==n || count==0 || (count==1 && (word[0]>='A' && word[0]<='Z'));
    }
};