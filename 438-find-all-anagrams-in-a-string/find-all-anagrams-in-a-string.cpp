class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        vector<int>ans;
        int n = p.length();
        int m = s.length();
        if(n>m) return {}; 
        for(int i=0;i<n;i++){
            v1[s[i]-'a']++;
            v2[p[i]-'a']++;

        }
        if(v1==v2) ans.push_back(0);
        for(int i=1;i<=m-n;i++){
            v1[s[i-1]-'a']--;
            v1[s[i+n-1]-'a']++;
            if(v1==v2) ans.push_back(i);
        }
        return ans;
        
    }
};