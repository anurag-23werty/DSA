class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int MOD = 1e9+7;
        long long total=0;
        int maxGain =0;
        vector<int>a(n,0);
        a = nums1;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            int oldDiff = abs(nums1[i]-nums2[i]);
            total+=oldDiff;
            auto it = lower_bound(a.begin(),a.end(),nums2[i]);
            if(it!=a.end()){
                int newDiff = abs(*it-nums2[i]);
                maxGain = max(maxGain,(oldDiff-newDiff));
            }
            
            if(it!= a.begin()){
                it--;
                int newDiff =abs(*it-nums2[i]);
                maxGain = max(maxGain,(oldDiff-newDiff));
            }

        }
        return (total - (maxGain))%MOD;

        
        
    }
};