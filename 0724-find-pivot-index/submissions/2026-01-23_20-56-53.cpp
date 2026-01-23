class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0,rs=0;
        for(int i=0;i<nums.size();i++)
        rs+=nums[i];
        for(int i=0;i<nums.size();i++){
            rs-=nums[i];
            if(ls==rs)
            return i;
            ls+=nums[i];
        }
        return -1;
    }
};