class Solution {
public:
    bool isDay(vector<int>&bloomDay,int day,int m,int k){
        int count=0;
        int maxB=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                maxB+= (count/k);
                count=0;
            }
        }
        maxB+=(count/k);
        return maxB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int x = bloomDay.size();
        if(x<((long)m*k)) return -1;
        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        int maxi = *max_element(bloomDay.begin(),bloomDay.end());
        int left = mini;
        int right = maxi;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(isDay(bloomDay,mid,m,k)){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left;
        
        


        
    }
  
};