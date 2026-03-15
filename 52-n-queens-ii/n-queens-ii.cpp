class Solution {
public:
int count=0;
    void Solve(int n,int col,vector<int>&leftRow,vector<int>&UpperDiag,vector<int>&LowerDiag){
        if(n==col){
            count++;
            return;
        }
        for(int row=0;row<n;row++){
            if((leftRow[row]==0 && UpperDiag[n-1+col-row]==0 && LowerDiag[row+col]==0)){
                leftRow[row]=1;
                UpperDiag[n-1+col-row]=1;
                LowerDiag[row+col]=1;
                Solve(n,col+1,leftRow,UpperDiag,LowerDiag);
                leftRow[row]=0;
                UpperDiag[n-1+col-row]=0;
                LowerDiag[row+col]=0;


            }
        }
    }
    int totalNQueens(int n) {
        vector<int>leftRow(n,0),UpperDiag(2*n-1,0),LowerDiag(2*n-1,0);
        Solve(n,0,leftRow,UpperDiag,LowerDiag);
        return count;
        
    }
};