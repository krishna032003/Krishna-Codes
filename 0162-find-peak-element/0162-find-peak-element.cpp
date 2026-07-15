class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if((mid==0 || nums[mid-1]<=nums[mid])&&(mid==n-1 || nums[mid+1]<=nums[mid]))
            return mid;
            if(mid>0 && nums[mid]<nums[mid-1])
            hi=mid-1;
            else
            lo=mid+1;
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna