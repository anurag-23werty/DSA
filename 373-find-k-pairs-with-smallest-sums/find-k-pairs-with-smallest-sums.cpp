class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<vector<int>>res;
        for(int i=0;i<nums2.size();i++){
            
            pq.push({nums1[0]+nums2[i],0});
        }
        while(k-- && !pq.empty()){
            int sum = pq.top().first;
            int pos = pq.top().second;
            res.push_back({nums1[pos],sum-nums1[pos]});
            pq.pop();
            if(pos+1<nums1.size()){
                pq.push({sum-nums1[pos]+nums1[pos+1],pos+1});
            }
            }
        return res;
        
    }
};