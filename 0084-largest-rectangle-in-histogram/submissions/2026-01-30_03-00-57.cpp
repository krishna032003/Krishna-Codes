class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int res=0;
        vector<int> ps(n,-1),ns(n,n);
        stack<int> s,t;
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i])
            s.pop();
            ps[i]=(s.empty()?-1:s.top());
            s.push(i);
        }
        for(int i=n-1;i>=0;i--){
            while(!t.empty() && heights[t.top()]>=heights[i])
            t.pop();
            ns[i]=(t.empty()?n:t.top());
            t.push(i);
        }
        for(int i=0;i<n;i++){
            int width=ns[i]-ps[i]-1;
            int curr=heights[i]*width;

            res=max(curr,res);
        }
        return res;
    }
};