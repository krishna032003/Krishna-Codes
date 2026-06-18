class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        unordered_map<int,int> m;
        int res=0,presum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)
            arr[i]=-1;
            presum+=arr[i];
            if(presum==0)
            res=i+1;
            if(!m.count(presum)){
                m.insert({presum,i});
            }
            if(m.count(presum)){
                res=max(res,i-m[presum]);
            }

        }
        return res;
    }
};