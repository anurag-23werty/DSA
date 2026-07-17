class Solution {
public:
int find(vector<int>weights,int cap){
            int load=0;
            int day=1;
            for(int i=0;i<weights.size();i++){
                if(load+weights[i]>cap){
                    day++;
                    load = weights[i];
                }
                else{
                    load+=weights[i];
                }
            }
            return day;
        }
    int shipWithinDays(vector<int>& weights, int days) {
          
        int maxi = *max_element(weights.begin(),weights.end());
        int sum = accumulate(weights.begin(),weights.end(),0);

        while(maxi<=sum){
            int mid = (maxi+sum)/2;
            int req = find(weights,mid);
            if(req<=days) sum = mid-1;
            else maxi =mid+1;
        }
        return maxi;

        
    }
};