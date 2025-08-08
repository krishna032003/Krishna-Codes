class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        for (int t=0;t<nums.size();t++){
            for(int j=t+1;j<nums.size();j++){
                if(nums[t]+nums[j]==target)
                {return {t,j};
                } 
            }
        }
        return {};
    }
};