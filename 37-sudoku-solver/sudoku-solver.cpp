class Solution {
public:
    bool solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char ch='1';ch<='9';ch++){
                        if(solve(board,i,j,ch)==true){

                            board[i][j]=ch;
                            if(solveSudoku(board)) return true;
                            board[i][j]='.';
                            
                        }
                        
                    }
                    return false;

                }
            }
        }
        return true;

        
    }
    bool solve(vector<vector<char>>& board,int row,int col,char c){
        for(int k=0;k<9;k++){
                            if(board[k][col]==c) return false;
                            if(board[row][k]==c) return false;
                            if(board[(3*(row/3)+k/3)][(3*(col/3)+k%3)]==c) return false;
                        }
                        return true;
    }
};