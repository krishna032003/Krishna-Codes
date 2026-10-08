class Solution {
  public:
    vector<int> getlis(vector<int> &nums){
        vector<int> lis(nums.size());
        lis[0]=1;
        for(int i=1;i<nums.size();i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    lis[i]=max(lis[i],lis[j]+1);
                }
            }
        }
        return lis;
    }
    vector<int> getlds(vector<int> &nums){
        int n=nums.size();
        vector<int> lds(nums.size());
        lds[n-1]=1;
        for(int i=n-2;i>=0;i--){
            lds[i]=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    lds[i]=max(lds[i],lds[j]+1);
                }
            }
        }
        return lds;
    }
    int longestBitonicSequence(int n, vector<int> &nums) {
        // code here
        vector<int> lis=getlis(nums);
        vector<int> lds=getlds(nums);
        int res=0;
        for(int i=0;i<n;i++){
            if(lis[i] > 1 && lds[i] > 1)
            res=max(res,lis[i]+lds[i]-1);
        }
        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna