class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size(),index=0;;
        priority_queue<int,vector<int>,greater<int>> pq(arr.begin(),arr.begin()+k+1);
        for(int i=k+1;i<n;i++){
            arr[index++]=pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty()){
            arr[index++]=pq.top();
            pq.pop();
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna