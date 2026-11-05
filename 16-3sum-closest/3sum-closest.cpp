class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        int mini = INT_MAX;
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i =0;i<n-2;i++){
            if(mini == 0 ) break;
            int j = i+1;
            int k = n-1;
            int third = target -(nums[i]);
            while(j<k){
                if(nums[j]+nums[k]>third){
                    mini = min(mini,abs((nums[i]+nums[j]+nums[k])-target));
                    if(mini==abs((nums[i]+nums[j]+nums[k])-target)) res = nums[i]+nums[j]+nums[k];
                    k--;
                    
                    
                    
                }
                else if(nums[j]+nums[k]<third){
                    
                    mini = min(mini,abs(nums[i]+nums[j]+nums[k]-target));
                    if(mini==abs(nums[i]+nums[j]+nums[k]-target)) res = nums[i]+nums[j]+nums[k];
                    j++;
                    
                }
                else{
                    mini = 0;
                    res = nums[i]+nums[j]+nums[k];
                    break;
                }

            }
        }
        return res;
        
    }
};