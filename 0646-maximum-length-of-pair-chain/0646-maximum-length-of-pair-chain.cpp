class Solution {

    //GREEDY
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),
             [](auto &a,auto &b) {
                 return a[1] < b[1];
             });
        int ans=0;
        int last=INT_MIN;
        for(auto p:pairs) {
            if(p[0]>last) {
                ans++;
                last = p[1];
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna