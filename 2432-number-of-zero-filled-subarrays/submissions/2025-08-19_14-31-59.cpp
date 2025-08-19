class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long zero=0;
        long long count=0;
    
        for(int num: nums){
            if(num==0){
                zero++;
            }else{
                count+=(zero*(zero+1)/2);
                zero=0;
            }
        }
        if(zero>0){
            count+=(zero*(zero+1)/2);

        }
        return count;
    }
};