class Solution {
public:
    bool check(int i,vector<int>&vis,vector<vector<int>>& graph){
        queue<int>q;
        q.push(i);
        vis[i] = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto j:graph[node]){
                if(vis[j]==-1){
                    vis[j] = !vis[node];
                    q.push(j);
                }
                else{
                    if(vis[node]==vis[j]) return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(!check(i,vis,graph)) return false;
            }
        }
        return true;
    }
};