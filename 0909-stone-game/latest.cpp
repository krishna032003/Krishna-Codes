class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size()-1;
        int sumi=0,sumir=0,sumj=0,sumjr=0;
        for(int i=0;i<n;i+=2)
        sumi+=piles[i];
        for(int i=1;i<n;i+=2)
        sumj+=piles[i];

        for(int i=n;i>0;i-=2)
        sumir+=piles[i];
        for(int i=n-1;i>0;i-=2)
        sumjr+=piles[i];
        

        int sumo=max(sumi,sumir);
        int sume=0;
        if(sumi>sumir)
        {
            sume=sumj;
        }
        else
        sume=sumjr;
        return sumo>sume;
    }
};