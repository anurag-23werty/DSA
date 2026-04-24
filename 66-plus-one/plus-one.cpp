class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        
        // if(digits[n-1]<9){
        //     digits[n-1]++;
                
        // }
        int hand=1;
        for(int i=n-1;i>=0;i--){
            int x=(digits[i]+hand)%10;
            hand=(digits[i]+hand)/10;
            digits[i]=x;


        }
        if(hand==0) return digits;
        digits.insert(digits.begin(),1);

        return digits;
        }
        
        

        
    };
