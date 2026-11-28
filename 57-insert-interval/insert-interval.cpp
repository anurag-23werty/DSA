class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int start = newInterval[0];
        int end = newInterval[1];
        int n= intervals.size();
        int i=0;
        while(i<n && start>intervals[i][1]){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<n && intervals[i][0]<=end){
            newInterval={min(newInterval[0],intervals[i][0]),max(newInterval[1],intervals[i][1])};
            i++;
        }
        ans.push_back(newInterval);
        while(i<n){
            ans.push_back(intervals[i]);i++;
        }
        return ans;
        
    }
};