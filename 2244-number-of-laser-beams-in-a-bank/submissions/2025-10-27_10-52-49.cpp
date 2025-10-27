class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int ans=0,a=0;
        for(int i=0;i<n;i++){
            int b=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')
                b++;
            }
            if(b>0){
                ans+=a*b;
                a=b;            }

        }
        return ans;
    }
};