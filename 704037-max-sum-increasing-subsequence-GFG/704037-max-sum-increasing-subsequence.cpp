class Solution {
  public:
    int maxSumIS(vector<int>& nums) {
        // code here
        int n=nums.size(),len=1;
        vector<int> msis(n);
        for(int i=0;i<n;i++){
            msis[i]=nums[i];
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j])
                    msis[i]=max(msis[i],msis[j]+nums[i]);
            }
        }
        
        return *max_element(msis.begin(),msis.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna