class Solution {
public:
    string convert(string s, int numRows) {
        string t;
        if(numRows==1){
            return s;
        }
        for(int i=0;i<numRows;i++){
            int k=i;
            while(k<s.length()){
                t+=s[k];
                if(i>0 && i<numRows-1 && (k+(2*(numRows)-2)-(2*i))<s.length()){
                    t+=s[k+(2*(numRows)-2)-(2*i)];
                }
                k+=(2*(numRows)-2);

            }
        }
        return t;
        
    }
};