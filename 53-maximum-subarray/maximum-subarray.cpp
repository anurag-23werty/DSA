// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maci=INT_MIN;
//         int sum=0;
//         for(int i=0;i<nums.size();i++){
            
//             sum+=nums[i];
//             if(sum>maci) maci=sum;
//             if(sum<0) sum=0;
//         }
//         if(maci<0) return -1;
//         return maci;

        
//     }
// };
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = 0, maxTillNow = INT_MIN;
        for(auto c : nums)
            curMax = max(c, curMax + c),
            maxTillNow = max(maxTillNow, curMax);
        return maxTillNow;
    }
};