class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>Hashmap;
        for(string str:strs){
            map<char,int>mapp;
            for(int i=0;i<str.length();i++){
                mapp[str[i]]++;
            }
            Hashmap[mapp].push_back(str);


        }
        vector<vector<string>>ans;
        for(auto &j:Hashmap){
            ans.push_back(j.second);
        }
        return ans;
        
    }
};