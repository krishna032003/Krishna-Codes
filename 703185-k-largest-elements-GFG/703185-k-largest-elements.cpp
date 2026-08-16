class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int x:arr){
            pq.push(x);
            if(pq.size()>k)
            pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna