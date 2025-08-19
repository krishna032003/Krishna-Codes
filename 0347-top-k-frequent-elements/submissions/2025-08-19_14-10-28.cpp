class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());
        int offset = -minVal; // shift negatives to positive indices

        vector<int> vec(maxVal - minVal + 1, 0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            vec[nums[i]+offset]++;
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
        int max1=0;
        int idx1=0;
        for(int j=0;j<vec.size();j++){
            if(vec[j]>max1)
            {max1=vec[j];
            idx1=j;
            }
        }
        vec[idx1]=0;
        ans.push_back(idx1-offset);
        }
        
        return ans;
    }
};