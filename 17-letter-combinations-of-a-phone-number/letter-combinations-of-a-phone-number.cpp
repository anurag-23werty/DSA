class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int index=0;
        vector<string>ans;
        vector<string>mapping{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output="";
        solve(digits,index,ans,mapping,output);
        return ans;

        
    }
    void solve(string &digit,int ind,vector<string>&ans,vector<string>&map,string &output){
        if(ind>=digit.length()){
            ans.push_back(output);
            return;
        }
        int a=digit[ind]-'0';
        string value=map[a];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digit,ind+1,ans,map,output);
            output.pop_back();

        }
    }
};