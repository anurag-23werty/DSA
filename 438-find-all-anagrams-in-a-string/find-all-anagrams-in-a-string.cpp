class Solution {
public:
    bool fn(vector<int>v1,vector<int>v2){
        for(int i=0;i<256;i++){
            if(v1[i]!=v2[i]) return 0;
        }
        return 1;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>vec(256,0);
        int n = p.length();
        for(int i=0;i<n;i++){
            vec[p[i]]++;

        }
        vector<int>vec2(256,0);
        vector<int>ans;
        int i=0;
        int m = s.length();
        for(int j=0;j<m;j++){
            vec2[s[j]]++;
            if(j-i+1==n){
            if(fn(vec,vec2)){
                    ans.push_back(i);
                    vec2[s[i]]--;
                    i++;

            }
            else{
                vec2[s[i]]--;
                i++;
            }
            }

        }
        return ans;
        
    }
};