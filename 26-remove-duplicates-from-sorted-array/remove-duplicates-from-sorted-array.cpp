class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int k=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]!=nums[i-1]){
        //         nums[k]=nums[i];
        //         k++;
        //     }
        // }
        // return k;
        int i=1;
        
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[j-1]) {
                nums[i]=nums[j];
                i++;
                
            }
        }
        return i;

        
    }
};