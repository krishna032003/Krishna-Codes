/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* root, int k,unordered_set<int> &s) {
        if(!root)
        return 0;
        if(helper(root->left,k,s))
        return 1;
        if(s.count(k-root->val))
        return 1;
        else
        s.insert(root->val);
        return helper(root->right,k,s);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> s;
        return helper(root,k,s);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna