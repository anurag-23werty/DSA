class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        int ans=0;
        for(auto &i:words){
            string reversed = i;
            swap(reversed[0],reversed[1]);
            if(mp[reversed]>0){
                ans+=4;
                mp[reversed]--;

            }
            else{
                mp[i]++;
            }

        }
        for(auto &i:mp){
            string word = i.first;
            int count = i.second;
            if(word[0]==word[1] && count>0){
                ans+=2;
                break;
            }
        }
        return ans;
    }
};