/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 */
class Solution {
  public:
    vector<vector<int>> levelOrder(Node* root) {
        // code here
        vector<vector<int>> ans;
        if(root==nullptr)
        return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int> level;
            while(sz--){
                Node* curr=q.front();
                q.pop();
                level.push_back(curr->data);
                if(curr->left)
                    q.push(curr->left);
                
                
                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna