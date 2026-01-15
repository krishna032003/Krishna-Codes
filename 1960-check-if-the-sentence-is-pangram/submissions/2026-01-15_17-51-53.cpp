class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool visited[26]={0};
        for(char c:sentence){
            visited[c-'a']=1;
        }
        for(int i=0;i<26;i++){
            if(visited[i]==0)
            return false;
        }
        return true;
    }
};