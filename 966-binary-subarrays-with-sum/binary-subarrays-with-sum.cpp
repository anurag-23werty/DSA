class Solution {
public:
    int binsum(vector<int>&nums,int goal){
        int tail=0;
        int sum=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum >goal &&  tail<=i){
                sum-=nums[tail++];
            }
            res+=i-tail+1;
            
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return binsum(nums,goal)-binsum(nums,goal-1);
        
    }
};