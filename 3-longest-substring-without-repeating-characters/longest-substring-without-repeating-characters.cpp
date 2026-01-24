class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   
        int ans=0;
        int l=0;
        vector<int>v(128);
        for(int r=0;r<s.size();r++){
            v[s[r]]++;
            while(v[s[r]]>1){
                v[s[l++]]--;
            }
            ans =max(ans,r-l+1);            
        }
        return ans;
    }

};