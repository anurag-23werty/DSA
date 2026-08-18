class Solution {
private:
    void dfs(int sr,int sc,int n,int m,vector<vector<int>>&image,vector<vector<int>>&mat,int iniColor,int color){
        
        if(sr<0 || sr==n || sc<0||sc==m||image[sr][sc]!=iniColor||mat[sr][sc]==color) return;
        mat[sr][sc] = color;
        dfs(sr+1,sc,n,m,image,mat,iniColor,color);
        dfs(sr-1,sc,n,m,image,mat,iniColor,color);
        dfs(sr,sc+1,n,m,image,mat,iniColor,color);
        dfs(sr,sc-1,n,m,image,mat,iniColor,color);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor = image[sr][sc];
        vector<vector<int>>mat = image;
        int n = image.size();
        int m = image[0].size();

        dfs(sr,sc,n,m,image,mat,iniColor,color);
        return mat;

        
    }
};