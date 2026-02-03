class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        int sign=1;
        
        if((dividend <0 && divisor>0) || (dividend>0 && divisor<0)) sign=-1;
        long n=abs((long)dividend);
        long m=abs((long)divisor);
        if(m==n) return sign*1;
        long ans=0;
        while(n>=m){
            int count=0;
            while(n>=(m<<(count+1))){
                count++;
            }
            ans=ans+(1L<<count);
            n=n-(m<<count);

        }
        
        

        return sign*ans;
        
    }
};