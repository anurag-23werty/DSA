class Solution {
public:
    int reverse(int x) {
        int num=0,rem;
        
        


        int k=x;
        if(x==INT_MIN) return 0;
        if(x<0) k=abs(x);
        while(k>0){
            rem=k%10;
            if(num>INT_MAX/10 || (num==INT_MAX/10 && rem>7) ) return 0;
            num=num*10+rem;
            k=k/10;
        }
        if(x<0) return num*-1;
        return num;
        
    }
};