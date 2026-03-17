class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=nums[0];
        int i=0;
        while(i<nums.size() && reach!=-1){
            if(nums[i]>reach) reach=nums[i];
            reach--;
            i++;
        }   
        if(i==nums.size()) return true;
        else return false;     
    }
};