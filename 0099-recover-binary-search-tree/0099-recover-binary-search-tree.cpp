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
    TreeNode* prev=NULL, *first=NULL, *second=NULL;
    void recoverTree(TreeNode* root) {
        helper(root);
        swap(first->val,second->val);
    }
    void helper(TreeNode* node){
        if(!node) return;
        helper(node->left);
        if(prev && prev->val>node->val){
            if(!first) first=prev;
            second=node;
        }
        prev=node;
        helper(node->right);
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna