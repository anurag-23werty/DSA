class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       
        
        int len=nums.size();
        int base=nums[0]+nums[1]+nums[2];
        int sum;
        
        

        sort(nums.begin(),nums.end());
        for(int i=0;i<len-2;i++){
            
            int j=i+1;
            int k=len-1;
            
            
            
            while(j<k){
                
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-base)){
                    base=sum;
                }
                if(sum<target) j++;
                else{
                    k--;
                }
                
                

                
                
            }
        }
        return base;
        
    }
};