class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool first) {
        int ans = -1;
        int lo = 0, hi = nums.size() - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] < target)
                lo = mid + 1;
            else if (nums[mid] > target)
                hi = mid - 1;
            else {
                ans = mid;
                if (first)
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {
            binarySearch(nums, target, true),
            binarySearch(nums, target, false)
        };
    }
};