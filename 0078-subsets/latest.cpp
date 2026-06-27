class Solution {
public:
    vector<vector<int>> result;
    vector<int> curr;

    void solve(vector<int>& nums, int i) {
        if (i == nums.size()) {
            result.push_back(curr);
            return;
        }
        solve(nums, i + 1);             // exclude
        curr.push_back(nums[i]);
        solve(nums, i + 1);             // include
        curr.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return result;
    }
};