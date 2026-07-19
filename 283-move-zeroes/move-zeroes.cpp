class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                nums[i++]=nums[j];
            }
            if(j==nums.size()-1){
                while(i<nums.size()) nums[i++]=0;
            }
        }
        
        
    }
};