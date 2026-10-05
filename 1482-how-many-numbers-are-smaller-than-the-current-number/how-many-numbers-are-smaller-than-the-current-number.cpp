class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res(101,0);
        vector<int> ans(nums.size());
        for(int i:nums){
            res[i]++;
        }
        for(int i=1;i<101;i++){
            res[i]+= res[i-1];
        }
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            if(x==0) ans[i] = 0;
            else{
                ans[i] = res[x-1];
            }
        }
        return ans;

    }
};