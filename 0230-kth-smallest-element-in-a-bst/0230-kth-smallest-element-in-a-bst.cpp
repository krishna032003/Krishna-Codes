class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        while (root) {
            int leftCount = countNodes(root->left);

            if (k == leftCount + 1)
                return root->val;

            else if (k <= leftCount)
                root = root->left;

            else {
                k -= leftCount + 1;
                root = root->right;
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna