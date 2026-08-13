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
    vector<int> bottomView(Node *root) {
        // code here
        if(!root)return {};
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto [curr,hd]=q.front();
            q.pop();
            mp[hd]=curr->data;
            if(curr->left){
                q.push({curr->left,hd-1});
            }
            if(curr->right){
                q.push({curr->right,hd+1});
            }
            
        }
        vector<int> ans;
        for(auto p:mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna