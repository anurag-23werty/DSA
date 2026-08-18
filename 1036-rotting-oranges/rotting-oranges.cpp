class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cntFresh =0 ;
        queue<pair<int,int>>q;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2) {q.push({i,j});
                visited[i][j]=2;
                }
                
                if(grid[i][j]==1)cntFresh++;
            }
        }

        int drow[] = {-1,0,1,0};
        int urow[] ={0,-1,0,1};
        
        int time = 0;
        while(!q.empty() && cntFresh>0){
            int size = q.size();
            while(size--){
                auto [r,c]=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int newR = r+drow[i];
                    int newC = c+urow[i];
                    if(newR>=0 && newR<n && newC>=0 && newC<m && !visited[newR][newC] && grid[newR][newC]==1){
                        q.push({newR,newC});
                        visited[newR][newC] = 2;
                        cntFresh--;

                    }
                }
            }
            time++;
        }
        return cntFresh==0?time :-1;



        
        
    }
};