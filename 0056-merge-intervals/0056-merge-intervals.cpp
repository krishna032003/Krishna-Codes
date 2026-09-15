class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int res=0;
        
        for(int i=1;i<n;i++){
            if(arr[res][1]>=arr[i][0]){
                arr[res][0]=min(arr[res][0],arr[i][0]);
                arr[res][1]=max(arr[res][1],arr[i][1]);
            }
            else{
                res++;
                swap(arr[res],arr[i]);
            }
        }
        arr.resize(res + 1);
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna