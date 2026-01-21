class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        vector<int> maxending(n);
        maxending[0]=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            maxending[i]=max(maxending[i-1]+nums[i],nums[i]);
            res=max(res,maxending[i]);
        }
        return res;
    }
};