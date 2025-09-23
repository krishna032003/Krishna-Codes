class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        int max2=*max_element(nums.begin(),nums.end());
        vector<int> a(max2+1,0);
        for(int i=0;i<n;i++){
            a[nums[i]]++;
        }
        
        int max1=*max_element(a.begin(),a.end()),ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==max1)
            ans+=a[i];
        }
        return ans;
    }
};