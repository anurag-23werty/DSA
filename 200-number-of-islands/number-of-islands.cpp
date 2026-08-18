class Solution {
public:
    void dfs(int i ,int j,int n,int m,vector<vector<int>>&visited,vector<vector<char>>&grid){
        if(i==n||i<0||j==m||j<0||grid[i][j]=='0'||visited[i][j]) return ;
        visited[i][j]=1;
        dfs(i+1,j,n,m,visited,grid);
        dfs(i-1,j,n,m,visited,grid);
        dfs(i,j+1,n,m,visited,grid);
        dfs(i,j-1,n,m,visited,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n =grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int islands =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs(i,j,n,m,visited,grid);
                    islands++;

                }
            }
        }
        return islands;

        
        
    }
};