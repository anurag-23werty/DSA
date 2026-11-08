class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int n= nums.size();
        int sum=0;
        int res=INT_MAX;
        for(int j=0;j<n;j++){
            sum+= nums[j];
            while(sum>=target){
                res = min(res,j-i+1);
                
                sum -= nums[i];
                i++;
            }
        }
        if(res==INT_MAX) return 0;
        return res;
        
    }
};