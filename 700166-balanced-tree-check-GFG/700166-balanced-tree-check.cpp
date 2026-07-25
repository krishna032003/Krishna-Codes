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
    int bal(Node* root){
        if(!root)
        return 0;
        int lh=bal(root->left);
        if(lh==-1) return -1;
        int rh=bal(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1)
        return -1;
        return max(lh,rh)+1;
    }
    
    bool isBalanced(Node* root) {
        return bal(root)==-1?false:true;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna