class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int sum =0 ;
        int len = 0;
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            sum+= nums[j];
            len = j-i+1;
            while(sum>=target){
                ans= min(ans,len);
                sum -= nums[i];
                i++;
                len = j-i+1;
                
                
            }
            

        }
        if(ans==INT_MAX) return 0;
        return ans;
        
    }
};