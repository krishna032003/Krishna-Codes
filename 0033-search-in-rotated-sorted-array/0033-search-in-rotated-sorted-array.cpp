class Solution {
public:
    int search(vector<int>& nums, int k) {
        // Time complexity: O(log n), Space complexity: O(1)
        int n=nums.size(),lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==k)
            return mid;
            if(nums[lo]<=nums[mid]){
                if(nums[mid]>k && nums[lo]<=k)
                hi=mid-1;
                else
                lo=mid+1;
            }
            else{
                if(nums[hi]>=k && nums[mid]<k)
                lo=mid+1;
                else
                hi=mid-1;
            }
           
        }
         return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna