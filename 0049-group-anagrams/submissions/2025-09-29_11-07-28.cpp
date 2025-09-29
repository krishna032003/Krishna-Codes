class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ana;
        int n=strs.size();
        for(int i=0;i<n;i++){
            ana[sorts(strs[i])].push_back(strs[i]);
        }
        
        return ans(ana);

    }
    string sorts(string s){
        sort(s.begin(),s.end());
        return s;
    }
    static vector<vector<string>> ans(unordered_map<string,vector<string>> &s){
        vector<vector<string>> ans;
        for(auto& pair: s){
            ans.push_back(pair.second);
        }
        return ans;
    }
};