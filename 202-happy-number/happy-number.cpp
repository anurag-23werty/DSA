class Solution {
public:
   
    bool isHappy(int n) {
        unordered_set<int>st;
        while(true){
            int sum=0;
            while(n>0){
                int x = n%10;
                sum+=(x*x);
                n=n/10;

            }

            if(sum == 1) return true;
            n=sum;
            if(st.find(sum)!=st.end()) return false ;
            st.insert(sum);


        }
        
    }
};