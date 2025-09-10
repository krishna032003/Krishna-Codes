class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int r=0,c=0;
        vector<int> ans(m*n);
        int no=m*n;
        for(int i=0;i<no;i++){
            ans[i]=mat[r][c];
            if((r+c)%2==0){  //move up-right
                if(c==n-1)
                r++;
                else if(r==0)
                c++;
                else r--,c++;
            }
            else{ //move down-left
                if(r==m-1)
                c++;
                else if(c==0)
                r++;
                else r++,c--;
            }
        }
    return ans;}
};