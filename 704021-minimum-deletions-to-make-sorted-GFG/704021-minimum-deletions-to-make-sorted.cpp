class Solution {
  public:
    int minDeletions(vector<int>& nums) {
        // code here
        int n=nums.size(),len=1;
                vector<int> tail(n);
                tail[0]=nums[0];
                for(int i=1;i<n;i++){
                    if(nums[i]>tail[len-1]){
                    tail[len++]=nums[i];
                    }
                    else{
                        int c=lower_bound(tail.begin(),tail.begin()+len,nums[i])-tail.begin();
                        tail[c]=nums[i];
                    }
                }
                return n-len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna