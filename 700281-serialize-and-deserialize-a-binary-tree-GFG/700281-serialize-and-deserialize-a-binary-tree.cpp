/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    int idx=0;
  public:
    void sr(Node* root,vector<int> &ans){
        if(!root)
        {
            ans.push_back(-1);
            return;
        }
        ans.push_back(root->data);
        sr(root->left,ans);
        sr(root->right,ans);
    }
    vector<int> serialize(Node *root) {
        //  code here
        vector<int> ans;
        sr(root,ans);
        return ans;
    }

    Node *deSerialize(vector<int> &arr) {
        
        if(idx==arr.size())
        return nullptr;
        int val=arr[idx];
        idx++;
        if(val==-1) return nullptr;
        Node* root=new Node(val);
        root->left=deSerialize(arr);
        root->right=deSerialize(arr);
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna