class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(mid%2==1)
            mid--;
            if(nums[mid]==nums[mid+1])
            lo=mid+2;
            else
            hi=mid;
        }
        return nums[lo];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna