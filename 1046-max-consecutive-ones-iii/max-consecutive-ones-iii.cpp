class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int ero=0;
        int length=0;
        for(int right=0;right<nums.size();right++){
            if(!nums[right]) ero++;
            while(ero>k){
                if(!nums[left]) ero--;
                left++;
            }
            length = max(length,right-left+1);

        
        }
        return length;
        
    }
};