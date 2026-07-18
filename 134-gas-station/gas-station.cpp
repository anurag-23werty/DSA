class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=accumulate(gas.begin(),gas.end(),0);
        int sum2=accumulate(cost.begin(),cost.end(),0);
        if(sum1<sum2) return -1;
        int ans=0;
        int res=INT_MAX;
        for(int i=0;i<gas.size();i++){
            ans += gas[i]-cost[i];
            if(ans<0) {
                ans=0;
                res=INT_MAX;
            }
            else{
                res=min(res,i);
            }

            
        }
        return res;
        
    }
};