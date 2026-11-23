class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int n = nums.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+= nums[i];
            int x = ((sum % k) + k) % k;
            int chart = mp[x];
            ans += chart;
            mp[x]++;





        }
        return ans;
        
    }
};