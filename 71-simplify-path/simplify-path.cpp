class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        stringstream ss(path);
        
        string word="";
        while(getline(ss,word,'/')){
            if(word!="."&& word!=".." && !word.empty()){
                st.push(word);
            }
            if(word=="..") {
                if(!st.empty()){
                st.pop();
                }
            }
        }
        if(st.empty()) return "/";
        string result="";
        while(!st.empty()){
            result = "/"+st.top()+result;
            st.pop();

        }
        return result;
        
    }
};