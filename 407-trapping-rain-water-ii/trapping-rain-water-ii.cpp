class Solution {
public:
    typedef pair<int,pair<int,int>>PP;
    vector<vector<int>>directions = {{0,1},{1,0},{-1,0},{0,-1}};
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size();
        int n = heightMap[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        priority_queue<PP,vector<PP>,greater<>>boundaryCells;
        for(int i=0;i<m;i++){
            for(int c:{0,n-1}){
                boundaryCells.push({heightMap[i][c],{i,c}});
                visited[i][c]=true;
            }
        }
        for(int i=0;i<n;i++){
            for(int r:{0,m-1}){
                boundaryCells.push({heightMap[r][i],{r,i}});
                visited[r][i] = true;
            }
        }
        int trappedWater = 0;
        while(!boundaryCells.empty()){
            auto [height,coor] = boundaryCells.top();
            boundaryCells.pop();
            int x = coor.first;
            int y = coor.second;
            for(vector<int>&v:directions){
                int x_= x+v[0];
                int y_ = y+v[1];
                if(x_>0 && x_<m && y_>0 && y_<n && !visited[x_][y_]){
                    trappedWater += max(0,height - heightMap[x_][y_]);
                    boundaryCells.push({max(height,heightMap[x_][y_]),{x_,y_}});
                    visited[x_][y_] = true;
                }
            }
        }
        return trappedWater;
        
    }
};