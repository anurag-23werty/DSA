class Solution {
public:
    int getSum(vector<int>&nums,int k){
        int x = 0;
        int seg =1 ;
        for(int i=0;i<nums.size();i++){
            if(x+nums[i]<=k){
                x=x+nums[i];
            }
            else{
                seg++;
                x = nums[i];
            }
        }
        return seg;
    }
    int splitArray(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(),nums.end());
        int sum = accumulate(nums.begin(),nums.end(),0);
        int left = maxi;
        int right = sum;
        while(left<=right){
            int mid = left+(right-left)/2;
            
            if(getSum(nums,mid)<=k) right = mid-1;
            else left = mid+1;

        }
        return left;
        
        
    }
};