/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
        if(!root)
        return {};
        queue<Node*> q;
        q.push(root);
        vector<int> ans;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                Node* curr=q.front();
                q.pop();
                if(i==0)
                ans.push_back(curr->data);
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