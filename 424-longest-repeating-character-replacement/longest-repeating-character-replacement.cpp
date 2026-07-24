class Solution {
public:
    int characterReplacement(string s, int k) {
         int l = 0;
        int r = 0;
        int maxf =0;
        int maxlen=0;
        vector<int>v(26,0);
        while(r<s.length()){
            v[s[r]-'A']++;
            maxf = max(maxf,v[s[r]-'A']);
            if((r-l+1)-maxf>k){
                v[s[l]-'A']--;
                maxf=0;
                l++;
                
            }
           
            maxlen = max(maxlen,r-l+1);
            r++;
            
        }
        return maxlen;
        
    }
};