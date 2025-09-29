class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(),nums.end());
        int longest=0;
        for(int n:numset){
            if(numset.find(n-1)==numset.end()){
               int current=n;
               int streak=1;
            
                while(numset.find(current+1)!=numset.end()){
                    current++;
                    streak++;
                }
            longest=max(longest,streak);
        }
        }
        return longest;
    }
};