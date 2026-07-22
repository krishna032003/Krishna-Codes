/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        if(root==nullptr)
        return INT_MIN;
        return max(root->data,max(findMax(root->left),findMax(root->right)));
    }

    int findMin(Node *root) {
        if(root==nullptr)
        return INT_MAX;
        return min(root->data,min(findMin(root->left),findMin(root->right)));
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna