class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        int sign=1;
        int num=0;
        while(i<n && s[i]==' '){i++;
        }
        if(i<n && (s[i]=='+'||s[i]=='-')){
            if(s[i]=='-') {sign=-1;
            }
            i++;
        }
        while(i<n && isdigit(s[i])){
            int dig=s[i]-'0';
            if(num>INT_MAX/10 || (num==INT_MAX/10 && dig>7)) {
                return (sign==1) ?  INT_MAX: INT_MIN;
            }
            num=num*10+dig;
            i++;
        }
        return sign*num;


        
    }
    
};