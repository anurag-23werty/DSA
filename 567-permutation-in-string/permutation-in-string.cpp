class Solution {
public:
    bool fn(vector<int>&v1,vector<int>&v2){
        for(int i=0;i<256;i++){
            if(v1[i]!= v2[i]) return 0;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int>vec1(256,0);
        vector<int>vec2(256,0);
        for(int i=0;i<s1.length();i++){
            vec1[s1[i]]++;
        }
        int n = s1.length();
        int i=0;
        for(int j=0;j<s2.length();j++){
            vec2[s2[j]]++;
            if(j-i+1==n){
                if(fn(vec1,vec2)) return true;
                else if(!fn(vec1,vec2)){
                    vec2[s2[i]]--;
                    i++;
                }
            }


        }
        return false;

        
    }
};