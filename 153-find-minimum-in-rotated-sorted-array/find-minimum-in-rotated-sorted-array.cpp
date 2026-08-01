class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0 ;
        int n= nums.size();
        int right = n-1;
        int ans=INT_MAX;
        while(left<=right){
            if (nums[left] <= nums[right]) {
                ans = min(ans, nums[left]);
                break;
            }
            int mid = left+(right-left)/2;
            
                //left half is sorted
                if(nums[left]<=nums[mid]){
                    ans = min(ans,nums[left]);
                    left = mid+1;
                    
                }
                //right half is sorted
                else{
                    ans = min(ans,nums[mid]);
                    right = mid-1;
                }
            }
            return ans;

            
        
        
    }
};