class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if(k>=n) return "0";
        stack<char>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && (st.top()-'0')>(num[i]-'0')){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0) {
            st.pop();
            k--;
        }
        // if(st.empty()) return "0";
        string temp="";
        while(!st.empty()){
            temp+=st.top();
            st.pop();

        }
        while(temp.length()!=0 && temp.back()=='0'){
            temp.pop_back();
        }
        if(temp.empty()) return "0";
        reverse(temp.begin(),temp.end());
        if(temp.empty()) return "0";
        return temp;



        }
        
    
};