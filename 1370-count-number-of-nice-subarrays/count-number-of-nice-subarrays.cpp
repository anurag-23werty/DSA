class Solution {
public:
    int ans(vector<int>&nums,int k){
        if(k<0) return 0;
         int i=0;
         int j=0;
         int sum=0;
         vector<int>v(nums.size(),0);
         for(int k=0;k<nums.size();k++){
            if(nums[k]%2) v[k]=1;
         }
         int count=0;
         while(j<nums.size()){
            
            sum+=v[j];
            while(sum>k){
                sum=sum-v[i];
                i++;
            }
            count+=(j-i+1);
            j++;


         }
         return count;

    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return ans(nums,k)-ans(nums,k-1);
    }
};