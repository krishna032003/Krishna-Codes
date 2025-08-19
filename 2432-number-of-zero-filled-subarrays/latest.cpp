class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long zero=0;
        long long count=0;
        for(int num: nums){
            if(num==0)
            {zero++;
            count+=zero;}
            else
            zero=0;
        }
        return count;
    }
};