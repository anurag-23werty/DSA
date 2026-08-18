class Solution {
public:
    int ans = 0;
    int count=0;
    void dfs(int i,int j,int n ,int m,vector<vector<int>>&visited,vector<vector<int>>&grid){
        if(i<0||i==n||j<0||j==m||visited[i][j]||!grid[i][j]){
            
            return ;
        }
        count++;
        visited[i][j]= 1;
        
        dfs(i+1,j,n,m,visited,grid);
        dfs(i-1,j,n,m,visited,grid);
        dfs(i,j+1,n,m,visited,grid);
        dfs(i,j-1,n,m,visited,grid);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]){
                    count =0;
                    dfs(i,j,n,m,visited,grid);
                    ans = max(ans,count);
                }
            }
        }
        return ans;

        
    }
};