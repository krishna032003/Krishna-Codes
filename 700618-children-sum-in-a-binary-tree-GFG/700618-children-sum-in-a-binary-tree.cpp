/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isSumProperty(Node *root) {
        // code here
        
        if (!root || (!root->left && !root->right))
            return true;

        int sum = 0;
        if(root->left) sum+=root->left->data;
        if(root->right) sum+=root->right->data;

        return (root->data==sum) &&
               isSumProperty(root->left) &&
               isSumProperty(root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna