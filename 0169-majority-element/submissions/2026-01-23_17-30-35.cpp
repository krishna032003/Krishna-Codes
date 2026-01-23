class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                el=i;
                count=1;
            }
            else if(nums[i]==nums[el]){
        
                count++;
            
            }
            else
            count--;


        }
        
     return nums[el];
        
        
    }
};