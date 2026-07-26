class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=s.size();
        vector<int>result;
        int numwords=words.size();
        if(n==0 || numwords==0) return result;
        int wordlen=words[0].size();
        int totalLen=numwords*wordlen;
        if(n<totalLen) return result;
        unordered_map<string,int>required;
        for(auto &w:words){
            required[w]++;
        }
        for(int i=0;i<wordlen;i++){
            int left=i;
            int matched=0;
            unordered_map<string,int>seen;
            for(int j=i;j<n;j+=wordlen){
                string word=s.substr(j,wordlen);
                if(required.count(word)){
                    seen[word]++;
                    if(seen[word]<=required[word]){
                        matched++;
                    }
                    while(seen[word]>required[word]){
                        string str=s.substr(left,wordlen);
                        seen[str]--;
                        if(seen[str]<required[str]) matched--;
                        left+=wordlen;
                    }
                    if(matched==numwords) result.push_back(left);
                }
                else{
                    seen.clear();
                    matched=0;
                    left=j+wordlen;
                }

            }
        }
        return result;

        
    }
};