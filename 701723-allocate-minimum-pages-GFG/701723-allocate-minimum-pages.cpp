class Solution {
  public:
    bool canAllocate(vector<int> &arr, int k,long long maxpages){
        int stud=1;
        long long pages=0;
        for(int book: arr){
            if(pages+book<=maxpages){
                pages+=book;
            }
            else{
                stud++;
                pages=book;
            }
        }
        return stud<=k;
    }
    int findPages(vector<int> &arr, int k) {
        if (k > arr.size())
    return -1;
        // code here
    
      
       long long lo=*max_element(arr.begin(),arr.end());
       long long hi=accumulate(arr.begin(),arr.end(),0LL);
       while(lo<=hi){
           long long mid=lo+(hi-lo)/2;
           if(canAllocate(arr,k,mid)){
            
            hi=mid-1;
            
           }
           else
           lo=mid+1;
       }
       return lo;
        }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna