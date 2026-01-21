class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxc=0,current=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            {current=0;
            continue;}
        
        else{
            current++;
            maxc=max(current,maxc);
        }
        
    }
    return maxc;
    }
};