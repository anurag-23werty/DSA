class Solution {
public:
    int distance(vector<int>&v){
        int ans = (v[0])*(v[0]) + (v[1]*v[1]);
        return ans;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
        for(int i=0;i<points.size();i++){
            minheap.push({distance(points[i]),i});
        }
        vector<vector<int>>ans;
        for(int i=0;i<k;i++){
            ans.push_back(points[minheap.top().second]);
            minheap.pop();
        }
        return ans;
        
    }
};