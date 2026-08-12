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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>> mp;
        queue<tuple<TreeNode*,int,int>> q;
        q.push({root,0,0});
        while(!q.empty()){
            auto [curr,row,hd]=q.front();
            q.pop();
            mp[hd].push_back({row,curr->val});
            
            if(curr->left){
                q.push({curr->left,row+1,hd-1});
            }
            if(curr->right){
                q.push({curr->right,row+1,hd+1});
            }
        }
        vector<vector<int>> ans;
        for(auto i : mp){
            
            sort(i.second.begin(),i.second.end());
            vector<int> a;
            for(auto p: i.second)
            a.push_back(p.second);
            ans.push_back(a);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna