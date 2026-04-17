class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for( auto i:intervals){
            if(ans.empty()||ans[ans.size()-1][1]<i[0]){
                ans.push_back(i);
            }
            else{
                ans[ans.size()-1][1]=max(i[1],ans[ans.size()-1][1]);

            }

        }
        return ans;
    }
};