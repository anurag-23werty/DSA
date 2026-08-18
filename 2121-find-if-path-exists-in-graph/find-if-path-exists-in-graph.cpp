class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(auto &i:edges){
            int u = i[0];
            int v = i[1];
            mp[u].push_back(v);
            mp[v].push_back(u);

        }
        queue<int>q;
        unordered_set<int>visited;
        q.push(source);
        visited.insert(source);

        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(node == destination ) return true;
            for(auto neighbour:mp[node]){
                if(visited.find(neighbour)==visited.end()){
                    visited.insert(neighbour);
                    q.push(neighbour);
                }

            }

        }
        return false;


        


        
    }
};