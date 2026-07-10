class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int res=INT_MAX;
        for(int i=0;i<n-1;i++){
            res=min(res,abs(arr[i+1]-arr[i]));
        }
        for(int i=0;i<n-1;i++){
            if(abs(arr[i+1]-arr[i])==res){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};