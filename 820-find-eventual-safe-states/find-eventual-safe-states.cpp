class Solution {
public:
    bool dfs(vector<int>&visited,vector<int>&path_visited,vector<int>&check,int node,vector<vector<int>> &graph){
        visited[node] = 1;
        path_visited[node] = 1;
        for(auto &it:graph[node]){
            if(!visited[it]){
                if(dfs(visited,path_visited,check,it,graph)==true) return true;
            }
            else if(path_visited[it]) return true;
        }
        path_visited[node] = 0;
        check[node] = 1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>> &graph) {
        int n = graph.size();
        vector<int>visited(n,0);
        vector<int>path_visited(n,0);
        vector<int>check(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(visited,path_visited,check,i,graph);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(check[i]) ans.push_back(i);
        }
        return ans;
        
    }
};