class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>v(256,0);
        int count=0;
        int sIndex=-1;
        int mini = INT_MAX;
        for(auto &i:t){
            v[i]++;
        }
        int l=0;
        int r=0;
        while(r<s.length()){
            if(v[s[r]]>0){
                count++;
            }
            v[s[r]]--;
            while(count==t.length()){
                if(r-l+1<mini){
                    mini = r-l+1;
                    sIndex=l;

                }
                v[s[l]]++;
                if(v[s[l]]>0) {
                    count--;
                  
                }
                l++;
                
            }
            r=r+1;

        }
        return sIndex==-1?"":s.substr(sIndex,mini);
        
    }
};