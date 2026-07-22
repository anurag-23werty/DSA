class Solution {
public:
bool isMatched(vector<int>mp1,vector<int>mp2){
    for(int i=0;i<26;i++){
        if(mp1[i]!=mp2[i]) return false;
        
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        
        vector<int> mp1(26,0);
        vector<int>mp2(26,0);
        int n = s1.length();
        int m = s2.length();
        if(n>m) return false;
        for(int i=0;i<n;i++){
            mp1[s1[i]-'a']++;
            mp2[s2[i]-'a']++;
            
        }
        if(mp1==mp2) return true;
        for(int i=1;i<=m-n;i++){
            mp2[s2[i-1]-'a']--;
            mp2[s2[i+n-1]-'a']++;
            if(mp1==mp2) return true;

        }
        return false;
    }
};