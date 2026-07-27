/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        if(root==nullptr)
        return {};
        stack<Node*> s1,s2;
        s1.push(root);
        vector<int> ans;
        while(!s1.empty() || !s2.empty()){
            while(!s1.empty()){
                Node* curr=s1.top();
                s1.pop();
                ans.push_back(curr->data);
                if(curr->left)
                s2.push(curr->left);
                if(curr->right)
                s2.push(curr->right);
            }
            while(!s2.empty()){
                Node* curr=s2.top();
                s2.pop();
                ans.push_back(curr->data);
                if(curr->right)
                s1.push(curr->right);
                if(curr->left)
                s1.push(curr->left);
                
            }
             
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna