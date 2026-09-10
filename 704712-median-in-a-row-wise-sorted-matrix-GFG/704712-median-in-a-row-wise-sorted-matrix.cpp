class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int r=mat.size(),c=mat[0].size();
        int mn=mat[0][0],mx=mat[0][c-1];
        int medpos=(r*c+1)/2;
        for(int i=1;i<r;i++){
            mn=min(mat[i][0],mn);
            mx=max(mat[i][c-1],mx);
        }
        while(mn<mx){
            int mid=mn+(mx-mn)/2;
            int count=0;
            for(int i=0;i<r;i++){
                count+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            if(count<medpos)
            mn=mid+1;
            else
            mx=mid;
            
        }
        return mx;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna