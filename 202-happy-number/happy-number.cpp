class Solution {
public:
    int fn(int a){
        int sum=0;
        while(a!=0){
            int num = a;
            a =a/10;
            sum = sum+(pow(num%10,2));

            

        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(fast!=1){
            slow = fn(slow);
            fast = fn(fast);
            fast = fn(fast);
            if(slow==fast && slow!=1){
                return false;
            }
        }
        return true;

        
    }
};