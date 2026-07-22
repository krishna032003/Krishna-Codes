class Solution {
   private:
    int findLeftHeight(TreeNode* node) {
        int height=0;
        while(node){
            height++;
            node=node->left;
        }
        return height;
    }
    int findRightHeight(TreeNode* node) {
        int height=0;
        while(node){
            height++;
            node=node->right;
        }
        return height;
    }

   public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int lh=findLeftHeight(root);
        int rh=findRightHeight(root);
        if (lh==rh) return (1<<lh)-1; 
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna