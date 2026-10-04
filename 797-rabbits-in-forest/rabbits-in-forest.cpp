class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        int total = 0;
        for(auto &it:answers) mp[it]++;
        for(auto &it:mp){
            
            total+= ceil((double)it.second/(it.first+1))*(it.first+1);

        }
        return total;
        
    }
};