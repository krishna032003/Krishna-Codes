class Solution {
public:
    void heapify(vector<int> &arr,int n,int i){
        int l=2*i+1, r=2*i+2, largest=i;
        if(l<n && arr[l]>arr[largest])
        largest=l;
        if(r<n && arr[r]>arr[largest])
        largest=r;
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }
    vector<int> sortArray(vector<int>& arr) {
        int n=arr.size();
        for(int i=(n-2)/2;i>=0;i--){
            heapify(arr,n,i);
        }
        for(int i=n-1;i>0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna