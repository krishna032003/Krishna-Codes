class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> s;
        int mn=INT_MAX, mx=INT_MIN;
        for(int x:nums) {
            mn=min(mn,x);
            mx=max(mx,x);
            s.insert(x);
        }
        vector<int> ans;
        for(int i=mn+1;i<mx;i++)
            if(!s.count(i))
                ans.push_back(i);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna