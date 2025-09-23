class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        for(int i=1;i<n;i++){
            ans[i-1]=*max_element(arr.begin()+i,arr.end());;
        }
        ans[n-1]=-1;
        return ans;
    }
    
};