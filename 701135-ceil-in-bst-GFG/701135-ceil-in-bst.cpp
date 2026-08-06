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
    int findCeil(Node* root, int k) {
        // code here
        
        Node* res=nullptr;
        while(root){
            if(root->data==k)
            return k;
            if(root->data>k)
            {res=root;
            root=root->left;
            }
            else
            root=root->right;
            
        }
        return res?res->data:-1;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna