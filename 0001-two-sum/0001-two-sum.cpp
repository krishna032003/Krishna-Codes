class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; // value -> index
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            int complement = target - x;

            if(mp.count(complement)){
                ans.push_back(mp[complement]); // index of complement
                ans.push_back(i);              // current index
                return ans; // return immediately once found
            }
            mp[x] = i; // store current value with its index
        }
        return ans; // if no solution found
    }
};
