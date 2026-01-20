class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int res=-1;
        int minvalue=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]>minvalue)
            res=max(res,nums[j]-minvalue);
            minvalue=min(minvalue,nums[j]);
        }
        return res;
    }
};