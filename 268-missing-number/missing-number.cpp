class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = (n*(n+1)) /2;
        for(int i:nums){
            maxi-= i;
        }
        return maxi;
    }
};