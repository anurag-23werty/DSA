class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums,right)-count(nums,left-1);

        
    }
    int count(vector<int>nums,int bound){
        int count=0;
        int ans=0;
        for(auto i:nums){
            count=i<=bound?count+1:0;
            ans+=count;
        }
        return ans;
    }
};