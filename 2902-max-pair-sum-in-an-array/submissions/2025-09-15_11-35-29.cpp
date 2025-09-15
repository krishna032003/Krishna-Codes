class Solution {
public:
    int maxSum(vector<int>& nums) {
        int N=nums.size();
        int ans=-1;
        vector<int>mp(10,-1);
      for(int i=0;i<N;i++)
      {
        int n=nums[i];
        int maxdig=0;
        while(n!=0)
        {   maxdig=max(maxdig,n%10);
            n=n/10;
        }
        if (mp[maxdig]!= -1) {
                ans = max(ans, nums[i]+mp[maxdig]);
            }
                mp[maxdig] = max(mp[maxdig], nums[i]);
      }  
    return ans;
    }
};