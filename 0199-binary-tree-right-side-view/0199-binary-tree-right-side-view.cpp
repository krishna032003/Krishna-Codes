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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
        return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(i==0)
                ans.push_back(curr->val);
                if(curr->right!=nullptr)
                q.push(curr->right);
                if(curr->left!=nullptr)
                q.push(curr->left);
                

            }
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna