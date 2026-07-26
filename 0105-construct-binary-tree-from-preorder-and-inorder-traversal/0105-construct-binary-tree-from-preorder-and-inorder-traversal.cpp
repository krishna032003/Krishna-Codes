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
    int preidx=0;
    unordered_map<int,int> mp;
    TreeNode* helper(vector<int>& pre,vector<int>& in,int start,int end){
        
        
        if(end<start)
        return nullptr;
        
        TreeNode* root=new TreeNode(pre[preidx++]);
        int inidx=mp[root->val];
        root->left=helper(pre,in,start,inidx-1);
        root->right=helper(pre,in,inidx+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
        mp[inorder[i]]=i;
        return helper(preorder,inorder,0,preorder.size()-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna