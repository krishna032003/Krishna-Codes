class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);

        TreeNode *cur=root;
        while (true){
            if(val<cur->val) {
                if(!cur->left) {
                    cur->left=new TreeNode(val);
                    break;
                }
                cur=cur->left;
            } else{
                if(!cur->right){
                    cur->right=new TreeNode(val);
                    break;
                }
                cur=cur->right;
            }
        }
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna