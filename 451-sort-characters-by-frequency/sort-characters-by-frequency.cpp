class Solution {
public:
    static bool cmp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<char,int>>v;
        for( auto [ch,freq]:mp){
            v.push_back({ch,freq});

        }
        string ans = "";
        sort(v.begin(),v.end(),cmp);
        for(auto [ch,freq]:v){
            for(int i=0;i<freq;i++){
                ans+=ch;
            }
        }
        return ans;
    }
};