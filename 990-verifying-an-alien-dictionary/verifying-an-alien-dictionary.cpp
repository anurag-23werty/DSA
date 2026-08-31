class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        for(int i=0;i<order.length();i++){
            mp[order[i]] = i;
        }
        for(int i=0;i<words.size()-1;i++){
            string v1 = words[i];
            string v2 = words[i+1];
            int j=0;
            while(j<v1.size() && j<v2.size()){
                if(v1[j]!=v2[j]){
                    if(mp[v1[j]]>mp[v2[j]]) return false;
                    break;
                }
                j++;
            }
            if(j==v2.size() && v1.size()>v2.size()) return false;
        }
        return true;
        
        
        
    }
};