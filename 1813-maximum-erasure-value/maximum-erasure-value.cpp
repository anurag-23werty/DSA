class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left=0;
        int maxi=0;
        int sum=0;
        unordered_map<int,int>mp;
        for(int right=0;right<nums.size();right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>1){
                mp[nums[left]]--;
                maxi=max(maxi,sum);
                sum-=nums[left];
                left++;
                
            }
            sum+=nums[right];
            maxi=max(maxi,sum);
            

        }
        return maxi;
        
    }
};