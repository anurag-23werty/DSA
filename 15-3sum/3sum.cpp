class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int k,j;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()-2;i++){
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            j=i+1;
            k = nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]== (-1 *(nums[i]))){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j]) j++;
                    while( j<k && nums[k]==nums[k+1]) k--;
                }
                else if(nums[j]+nums[k]>(-1 *(nums[i]))){
                    k--;

                }
                else{
                    j++;
                }
               
            }
          
        }
        return ans;
        
    }
};