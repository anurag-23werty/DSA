class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        for(auto &it:t){
            if(mp.find(it)==mp.end())return false;
            mp[it]--;
            if(mp[it]<0) return false;
        }
        return true;
        
    }
};