class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        unordered_map<int,int> m;
        int res=0,presum=0;
        m[0]=-1;
        for(int i=0;i<arr.size();i++){
            presum+=(arr[i]==0) ? -1 : 1;
            
            if(!m.count(presum)){
                m[presum]=i;
            }
            else{
                res=max(res,i-m[presum]);
            }

        }
        return res;
    }
};