class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid,int delrow[],int delcol[]){
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<4;i++){
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(nrow,ncol,vis,grid,delrow,delcol);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int delrow[]= {0,1,-1,0};
        int delcol[] = {-1,0,0,+1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        //ROWS
        for(int j = 0;j<m;j++){
            if(grid[0][j]==1 && !vis[0][j]){
                dfs(0,j,vis,grid,delrow,delcol);
            }
            if(grid[n-1][j]==1 && !vis[n-1][j]){
                dfs(n-1,j,vis,grid,delrow,delcol);
            }
        }
        //COLS
        for(int j=0;j<n;j++){
            if(grid[j][0]==1 && !vis[j][0]){
                dfs(j,0,vis,grid,delrow,delcol);
            }
            if(grid[j][m-1]==1 && !vis[j][m-1]){
                dfs(j,m-1,vis,grid,delrow,delcol);
            }
        }
        int ans = 0;
        for(int i = 0 ;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1) ans++;

            }
        }
        return ans;
        
    }
};