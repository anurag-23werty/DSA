class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int>st;
        int i = 0;
        long long curSum=0;
        long long maxi=0;
        
        for(int j=0;j<nums.size();j++){
            while(st.count(nums[j]) || st.size()==k){
                st.erase(nums[i]);
                curSum-=nums[i];
                i++;
            }
            st.insert(nums[j]);
            curSum+=nums[j];
            if(st.size()==k){
                maxi = max(maxi,curSum);
            }

        }
        return maxi;

    }
};