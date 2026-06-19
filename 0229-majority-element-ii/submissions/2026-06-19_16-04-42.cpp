class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        unordered_map<int,int> m;
        int n=arr.size();
        int k=3;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(m.count(arr[i]))
            m[arr[i]]++;
            else if(m.size()<k-1)
            m.insert({arr[i],1});
            else{
                for(auto it = m.begin(); it != m.end(); ) {
                    it->second--;

                    if(it->second == 0)
                        it = m.erase(it);
                    else
                        ++it;
                }
            }
        }
        for (auto &p : m) {
            int cnt = 0;

            for (int x : arr) {
                if (x == p.first)
                    cnt++;
            }

            if (cnt > n / 3)
                ans.push_back(p.first);
        }
        return ans;
    }
};