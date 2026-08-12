/* Structure of binary tree node
class Node{
public:
    int data;
    Node* left, right;
    Node(int item)
    {
        data = item;
        left = nullptr;
        right = nullptr;
    }
}
*/
class Solution {
  public:
    void vsum(Node* root,int hd,map<int,int> &mp){
        if(!root)
        return;
        vsum(root->left,hd-1,mp);
        mp[hd]+=root->data;
        vsum(root->right,hd+1,mp);
    }
    vector<int> verticalSum(Node* root) {
        // code here
        map<int,int> mp;
        vector<int> v;
        vsum(root,0,mp);
        for(auto sum:mp){
            v.push_back(sum.second);
        }
        return v;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna