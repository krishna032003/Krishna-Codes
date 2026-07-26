/* Structure for tree and linked list
class Node {
  public:
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    Node* prev=nullptr;
    Node* treeToDLL(Node* root) {
        // code here
        if(root==nullptr)
        return root;
        Node* head=treeToDLL(root->left);
        if(prev==nullptr)
        head=root;
        else{
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        treeToDLL(root->right);
        return head;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna