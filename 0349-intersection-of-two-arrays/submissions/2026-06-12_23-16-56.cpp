class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(),nums1.end());
        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            if(m.count(nums2[i])){
                ans.push_back(nums2[i]);
                m.erase(nums2[i]);
            }

        }
    
        return ans;
    }
};