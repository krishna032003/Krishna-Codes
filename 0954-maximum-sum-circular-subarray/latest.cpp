class Solution {
public:
    int maxsum(vector<int>& arr){
        int n=arr.size();
        int res=arr[0],maxending=arr[0];
        for(int i=1;i<n;i++){
            maxending=max(maxending+arr[i],arr[i]);
            res=max(res,maxending);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxnormal=maxsum(nums);
        if(maxnormal<0){
            return maxnormal;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nums[i]=-nums[i];
        }
        int maxcircular= sum+maxsum(nums);
        return max(maxcircular,maxnormal);
    }
};