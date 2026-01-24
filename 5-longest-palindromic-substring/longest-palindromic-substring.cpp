class Solution {
public:

    string longestPalindrome(string s) {

        string t="^";
        for(char c:s){
            t+='#';
            t+=c;
        }
        t+="#$";
        int n=t.length();
        int center=0;
        int right=0;
        vector<int>p(n,0);
        
        for(int i=1;i<n-1;i++){
            int mirror=(2*center)-i;
            if(i<right){
                p[i]=min(right-i,p[mirror]);
            }
            while(t[i+1+p[i]]==t[i-1-p[i]]){
                p[i]++;
            }
            if(p[i]+i>right){
                center=i;
                right=p[i]+i;
            }

        }
        int maxlen=0;
        int centerind=0;
        for(int i=1;i<n-1;i++){
            if(p[i]>maxlen){
                maxlen=p[i];
                centerind=i;
            }


        }
        int start=(centerind-maxlen)/2;
        return s.substr(start,maxlen);


         
    }
    
};