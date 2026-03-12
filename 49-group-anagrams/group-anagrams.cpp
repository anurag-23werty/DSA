class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map<map<char,int>,vector<string>>Hashmap;
        // for(string str:strs){
        //     map<char,int>mapp;
        //     for(int i=0;i<str.length();i++){
        //         mapp[str[i]]++;
        //     }
        //     Hashmap[mapp].push_back(str);


        // }
        // vector<vector<string>>ans;
        // for(auto &j:Hashmap){
        //     ans.push_back(j.second);
        // }
        // return ans;
        unordered_map<string,vector<string>>Hash;
        for(string str:strs){
            string key=str;
            sort(key.begin(),key.end());
            Hash[key].push_back(str);
        }
        vector<vector<string>>result;
        for(auto &j:Hash){
            result.push_back(j.second);
        }
        return result;
        
    }
};