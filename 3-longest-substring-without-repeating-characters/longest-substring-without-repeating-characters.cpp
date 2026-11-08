class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        unordered_map<char,int>mp;
        int n = s.length();
        int ans = 0;
        for(int j =0 ;j<n;j++){
            mp[s[j]]++;
            while(mp[s[j]]==2){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
        
    }
};