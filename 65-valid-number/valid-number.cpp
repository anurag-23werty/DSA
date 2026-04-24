class Solution {
public:
    bool isNumber(string s) {
        int n=s.size();
        int counte=0;
        int countd=0;
        int countN=0;
        int countAE=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.') countd++;
            if(s[i]=='e' || s[i]=='E') counte++;
            if(isdigit(s[i])){
                if(counte) countAE++;
                else countN++;
            }
            if(isalpha(s[i]) && (s[i]!='e' && s[i]!='E')) return false;
            if(countd>1 || counte>1) return false;
            if((s[i]=='+' || s[i]=='-') && i!=0 &&(s[i-1]!='e' && s[i-1]!='E')) return false;
            if(s[i]=='.' && counte) return false;
            if((i==0|| i==n-1) && (s[i]=='e'||s[i]=='E')) return false;
            if(i==0 && i==n-1 && s[i]=='.') return false;
            if((s[i]=='e'||s[i]=='E')&&!countN) return false;





        }
        if((counte && !countAE) || !countN) return false;
        return true;
        
    }
};