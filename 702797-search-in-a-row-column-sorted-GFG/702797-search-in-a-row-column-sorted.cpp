class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        int r=arr.size(), c=arr[0].size();
        int i=0, j=c-1;
        while(i<r && j>=0){
            if(arr[i][j]==x)
            return true;
            else if(arr[i][j]>x)
            j--;
            else
            i++;
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna