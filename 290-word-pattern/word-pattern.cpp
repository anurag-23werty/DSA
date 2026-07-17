class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss>>word){
            v.push_back(word);
        }
        if(pattern.length()!=v.size()) return false;
        unordered_map<char,string>mp;
        
        for(int i = 0;i<pattern.length();i++){
             for(auto &p:mp){
                    if(p.second==v[i] && p.first!=pattern[i]) return false;
                }
            if(mp.find(pattern[i])!= mp.end()){
                
                if(mp[pattern[i]]!=v[i]) return false;
               
            }

            else{
                mp[pattern[i]]=v[i];
            };
        }
        return true;

        
    }
};