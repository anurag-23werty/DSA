class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>required;
        for(auto &w:words){
            required[w]++;
        }
        int n = words.size();
        int word_length = words[0].length();
        vector<int>ans;
        int totallen = n*word_length;
        if(totallen>s.length()) return {};
        
        for(int i=0;i<word_length;i++){
            int left =i;
            int matched = 0;
            unordered_map<string,int>seen;
        for(int j=i;j+word_length<=s.length();j+=word_length){
            string x = s.substr(j,word_length);
            if(required.count(x)){
                seen[x]++;
                if(seen[x]<=required[x]) matched++;
                while(seen[x]>required[x]){
                    string y = s.substr(left,word_length);
                    seen[y]--;
                    left+=word_length;
                    if(seen[y]<required[y]) matched--;


                }
                if(matched == n) {
                    ans.push_back(left);
                    string y = s.substr(left,word_length);
                    seen[y]--;
                    left+=word_length;
                    matched--;


                }
            }
            else{
                seen.clear();
                matched =0;
                left = j+word_length;
            }           

            




            

            
        }
        }
        return ans;


        
    }
};