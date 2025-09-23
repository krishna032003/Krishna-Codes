class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> a1=convert(version1);
        vector<int> a2=convert(version2);
        int n=max(a1.size(),a2.size()),n1=a1.size(),n2=a2.size();
        for(int i=0;i<n;i++){
            int x=(i < a1.size() ? a1[i] : 0);
            int y=(i < a2.size() ? a2[i] : 0);
            if (x<y) return -1;
            if (x>y) return 1;
            
        }
        return 0;
    }
    vector<int> convert(string a){
        vector<int> word;
        string b="";
        for(char c: a){
            if(c=='.'){
                word.push_back(stoi(b));
                b="";
            }
            else{
                b+=c;
            }
        }
        if(!b.empty())
            word.push_back(stoi(b));
        return word;
    }
};