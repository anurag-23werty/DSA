class Solution {

public:
    void Solve(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&LeftRow,vector<int>&UpperDiagonal,vector<int>&LowerDiagonal,
    int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(LeftRow[row]==0 && LowerDiagonal[row+col]==0 && UpperDiagonal[col-row+n-1]==0){
                board[row][col]='Q';
                LeftRow[row]=1;
                LowerDiagonal[row+col]=1;
                UpperDiagonal[col-row+n-1]=1;
                Solve(col+1,board,ans,LeftRow,UpperDiagonal,LowerDiagonal,n);
                board[row][col]='.';
                LeftRow[row]=0;
                LowerDiagonal[row+col]=0;
                UpperDiagonal[col-row+n-1]=0;

                
            }
        }        

    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>LeftRow(n,0),UpperDiagonal(2*n-1,0),LowerDiagonal(2*n-1,0);

        Solve(0,board,ans,LeftRow,UpperDiagonal,LowerDiagonal,n);
        return ans;
        
    }
};