class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> m(nums.begin(),nums.end());
        int res=1;
        if(nums.empty())
        return 0;
        for(int i:m){
            if(!m.count(i-1)){
                int curr=1;
                while(m.count(i+curr))
                    curr++;
                res=max(res,curr);
            }
        }
        return res;
    }
};