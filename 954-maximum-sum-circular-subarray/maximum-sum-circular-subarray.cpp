class Solution {
public:
    int maxsum(vector<int>&nums){
        int sum= nums[0];
        int currentsum = nums[0];

        for(int i=1;i<nums.size();i++){
            currentsum = max(currentsum+nums[i],nums[i]);
            sum = max(sum,currentsum);

        }
        return sum;
    }
    int minsum(vector<int>&nums){
        int sum= nums[0];
        int currentsum = nums[0];

        for(int i=1;i<nums.size();i++){
            currentsum = min(currentsum+nums[i],nums[i]);
            sum = min(sum,currentsum);

        }
        return sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int a = maxsum(nums);
        int b = minsum(nums);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+= nums[i];
        }
        
        int c = sum - b;
        if(c==0) return a;
        return max(a,c);



        
    }
};