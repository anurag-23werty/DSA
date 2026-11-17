class Solution {
public:
    int minsum(vector<int>&nums){
        int sum= nums[0];
        int currentsum = nums[0];

        for(int i=1;i<nums.size();i++){
            currentsum = min(currentsum+nums[i],nums[i]);
            sum = min(sum,currentsum);

        }
        return sum;
    }
    int maxsum(vector<int>&nums){
        int sum= nums[0];
        int currentsum = nums[0];

        for(int i=1;i<nums.size();i++){
            currentsum = max(currentsum+nums[i],nums[i]);
            sum = max(sum,currentsum);

        }
        return sum;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int a = maxsum(nums);
        int b = minsum(nums);
        b = abs(b);
        return max(a,b);


        
    }
};