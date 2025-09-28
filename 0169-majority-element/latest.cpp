class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> maj;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maj[nums[i]]++;
            if(maj[nums[i]]>floor(n/2))
            return nums[i];
        }
        return 0;
    }
};