class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int m=1,n=nums.size();
        unordered_map<int,int> k;
        for(int i:nums){
            k[i]++;
        }
        int i=1;
        while(true){
            if(!k[i])
            {return i;}
            i++;
        }
        return 0;
    }
};