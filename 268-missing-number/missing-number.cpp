class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        vector<int>res(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            res[nums[i]] = 1;
        }
        for(int j=0;j<res.size();j++){
            if(res[j]==0) return j;
        }
    return 0;  
    }
};