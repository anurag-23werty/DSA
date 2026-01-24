class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long int rev=0,rem;
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
            
        }
        if (num==rev && num>=0) return true;
        else return false;
    }
};