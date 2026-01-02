class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
      

        unordered_set<int> ans;

        for(int x: nums){
        for (int a = 2; a*a <=x; a++) {
                while (x % a == 0) {
                    ans.insert(a);
                    x/=a;
                }
                
        
        }
        
        if(x>1)
                ans.insert(x);
        }

        return ans.size();
    }
};
