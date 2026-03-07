class Solution {
public:
    int jump(vector<int>& nums) {
        int far=0;
        int curr=0;int jump=0;
        for(int i=0;i<nums.size()-1;i++){
            far=max(far,i+nums[i]);
            if(i==curr){
                jump++;
                curr=far;
            }
        }
        return jump;
    }
};