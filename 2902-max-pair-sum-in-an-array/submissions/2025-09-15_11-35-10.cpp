class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int, int> maxForDigit;
        int maxSum = -1;

        for (int num : nums) {
            int digit = largest(num);
            if (maxForDigit.count(digit)) {
                maxSum = max(maxSum, maxForDigit[digit] + num);
            }
            maxForDigit[digit] = max(maxForDigit[digit], num);
        }

        return maxSum;
    }

    int largest(int n) {
        int maxDigit = 0;
        while (n > 0) {
            maxDigit = max(maxDigit, n % 10);
            n /= 10;
        }
        return maxDigit;
    }
};
