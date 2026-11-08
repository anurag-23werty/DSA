class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0 ;
        int n = nums.size();
        int zero =0 ;
        int len=0;
        int ans=0;
        for(int j=0;j<n;j++){
            len = j-i+1;
            if(nums[j]==0) zero++;
            while(zero>k){
                if(nums[i]==0) zero--;
                i++;
                len= j-i+1;
                
                


            }
            ans = max(ans,len);
        }
        return ans;
        
    }
};