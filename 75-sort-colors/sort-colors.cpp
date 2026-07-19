class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n,0);
        int i =0;
        int k=n-1;
        for(int j = 0;j<n;j++){
            if(nums[j]==0) i++;
            else if(nums[j]==2){
                 v[k]=2;
                 k--;
            }
            
        }
        while(i<=k) v[i++]=1;
        nums =v;
        
    }
};