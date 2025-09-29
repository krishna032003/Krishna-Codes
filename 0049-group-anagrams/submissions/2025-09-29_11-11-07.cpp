class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        int n=strs.size();
        for (const string& str:strs){
    ans[sortstring(str)].push_back(str);
}

        
        return collectgroups(ans);

    }
    string sortstring(string s){
        sort(s.begin(),s.end());
        return s;
    }
    vector<vector<string>> collectgroups(unordered_map<string,vector<string>> &s){
        vector<vector<string>> ans;
        for(auto& pair: s){
            ans.emplace_back(pair.second);
        }
        return ans;
    }
};