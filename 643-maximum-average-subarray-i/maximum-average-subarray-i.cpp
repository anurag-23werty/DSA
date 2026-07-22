class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int j=0;
        double avg=INT_MIN;
        double sum=0;
        int x=1;
        int pos=0;
        for(int i=0;i<nums.size();i++){
            
            if(x<k){
                
                sum+=nums[i];
                
                x++;
            }
            else{
                sum +=nums[i];
                avg=max(avg,(sum/k));
                sum-=nums[j++];
            }
            

        }
        // if(sum+nums[j-1]<0) return -1*avg;
        return avg;
        
    }
};