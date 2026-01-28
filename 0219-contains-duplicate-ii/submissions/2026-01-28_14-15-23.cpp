class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int n=a.size();
        map<int,int> mp;
        for(int i=0;i<min(k+1,n);i++){
            if(mp.find(a[i])!=mp.end()) return true;
            mp[a[i]]++;
        }
        for(int i=k+1;i<n;i++){
            mp[a[i-k-1]]--;
            if(mp[a[i]]>0) return true;
            mp[a[i]]++;
        }
        return false;
    }
};