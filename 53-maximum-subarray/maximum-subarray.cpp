class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int ans2 = nums[0];
        for(int i=1;i<n;i++){
            ans = max(ans+nums[i],nums[i]);
            ans2 = max(ans,ans2);

        }
        return ans2;
        
    }
};