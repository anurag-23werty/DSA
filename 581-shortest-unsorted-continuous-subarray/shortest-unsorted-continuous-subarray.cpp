class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       int n = nums.size();
       int left =-1;
       int right =-1;
       int j = -1;
       int ans=0;
       int maxi = INT_MIN;
       int mini = INT_MAX;
       for(int i=0;i<n;i++){
        if(nums[i]<maxi){
            
            right = i;
        }
        else{
            maxi = nums[i];
        }
       }
       for(int j=n-1;j>=0;j--){
        if(nums[j]>mini){
            
            left = j;
        }
        else{
            mini = nums[j];
        }
       }
       if(left==-1 && right==-1) return 0;

       return right-left+1;
       

    }
};