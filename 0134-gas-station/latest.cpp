class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int start=0,prev_pet=0,curr_pet=0;
        for(int i=0;i<n;i++){
            curr_pet+=gas[i]-cost[i];
            if(curr_pet<0){
                start=i+1;
                prev_pet+=curr_pet;
                curr_pet=0;
            }

        }
        return (prev_pet+curr_pet)>=0? start:-1;
    }
};