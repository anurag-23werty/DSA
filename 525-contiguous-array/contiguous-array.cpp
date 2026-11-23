class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int one = 0;
        int zero =0 ;
        unordered_map<int,int>mp;
        
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            else one++;
            int diff = zero-one;
            if(diff==0){
                ans = max(ans,i+1);
                continue;
            }
            if(mp.find(diff)==mp.end()){
                mp[diff] = i;
            }
            else{
                int idx = mp[diff];
                int len = i-idx;
                ans = max(ans,len);

            }


        }
        return ans;

        
    }
};