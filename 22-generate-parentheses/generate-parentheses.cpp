class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>vec;
        backtracking(vec,0,0,"",n);
        return vec;  
    };
    void backtracking(vector<string>&vec,int in,int out,string str,int n){
        if(in==n && out==n){
            vec.push_back(str);
            return;
        }
        if(in<n){
            backtracking(vec,in+1,out,str+"(",n);
        }
        if(out<in){
            backtracking(vec,in,out+1,str+")",n);
        }
    }
};