class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n=spells.size(),m=potions.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            long long spell=spells[i];
            long long required = (success + spell - 1) / spell;
            auto it=lower_bound(potions.begin(),potions.end(),required);
            ans[i]=(potions.end()-it);
        }
        return ans;

    }
};