class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        vector<int>st;
        int currentSum=0;
        int mini = INT_MAX;
        
        for(int j=0;j<nums.size();j++){
            currentSum+=nums[j];
            st.push_back(nums[j]);
        
            while(currentSum>=target){
                int l=st.size();
                mini = min(mini,l);
                currentSum-=nums[i++];
                st.erase(st.begin());
                
              
                
            }
   
            
            
            
            

        }
        if(mini==INT_MAX) return 0;
        return mini;
        
    }
};