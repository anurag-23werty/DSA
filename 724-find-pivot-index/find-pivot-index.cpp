class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix(nums.size());
        int left=0,right=0;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int j=0;j<nums.size();j++){
            if(j==0){
                left=0;
                right = prefix[nums.size()-1]-prefix[j];
            }
            else if(j==nums.size()-1){
                right =0 ;
                left= prefix[j-1];
            }
            else{
                left= prefix[j-1];
                right = prefix[nums.size()-1]-prefix[j];
            }
            if(left==right) return j;
            
        }
        return -1;
    }
};