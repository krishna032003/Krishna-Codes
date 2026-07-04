class Solution {
public:
    void merge(vector<pair<int,int>> &arr,int l,int m,int r,vector<int>& count){
        int n1=m-l+1,n2=r-m;
        vector<pair<int,int>> left(n1),right(n2);
        for(int i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            right[i]=arr[m+1+i];
        }
        int i=0,j=0,k=l,res=0;
        while(i<n1 && j<n2){
            if(left[i].first<=right[j].first){
                count[left[i].second]+=res;
                arr[k++]=left[i++];
            }
            else{
                arr[k++]=right[j++];
                res++;
            }
        }
        while(i<n1){
            count[left[i].second]+=res;
            arr[k++]=left[i++];
        }
        while(j<n2){
            arr[k++]=right[j++];
        }
        
    }
    void mergeSort(vector<pair<int,int>>& arr,int l,int r,vector<int> &count){
        if(l<r){
            int m=l+(r-l)/2;
            mergeSort(arr,l,m,count);
            mergeSort(arr,m+1,r,count);
            merge(arr,l,m,r,count);
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n,0);
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            arr[i]={nums[i],i};
        }
        
        mergeSort(arr,0,n-1,count);
        return count;
    }
};