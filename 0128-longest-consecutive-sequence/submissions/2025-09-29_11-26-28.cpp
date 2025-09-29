class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set numset(nums.begin(),nums.end());
        int longest=0;
        int current,streak;
        for(int n:numset){
            if(numset.find(n-1)==numset.end()){
                current=n;
                streak=1;
            }
            while(numset.find(current+1)!=numset.end()){
                current++;
                streak++;
            }
            longest=max(longest,streak);
        }
        return longest;
    }
};