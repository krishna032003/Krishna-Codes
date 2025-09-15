class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int large=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            {
                if(largest(nums[i])==largest(nums[j])){
                    if(nums[i]+nums[j]>large)
                    large=nums[i]+nums[j];
                }
            }
        }
        if(large==0)
        return -1;
        return large;
    }
    int largest(int n){
        int max=0;
        int dig=0;
        while(n!=0){
            dig=n%10;
            n/=10;
            if(dig>max){
                max=dig;
            }
        }
        return max;
    }
};