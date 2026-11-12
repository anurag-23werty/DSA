class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n= s.length();
        int m = t.length();
        int back =0 ;
        int i = n-1;
        int j = m-1;
        while(true){
            back=0;
            while(i>=0 && (back>0 ||s[i]=='#')){
                back += (s[i] == '#') ? 1 : -1;
                i--;
            }
            back=0;
            while(j>=0 && (back>0 ||t[j]=='#')){
                back += (t[j] == '#') ? 1 : -1;
                j--;
            }
            if(i>=0 && j>=0 && (s[i] == t[j])){
                i--;
                j--;
            }
            else{
                break;
            }

        }
        return i==-1 && j==-1;
        
    }
};