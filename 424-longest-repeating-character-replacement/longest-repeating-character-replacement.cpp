class Solution {
public:
    int find(vector<int>v){
        int maxi = 0;
        for(int i=0;i<256;i++){
            maxi = max(maxi,v[i]);

        }
        return maxi;
    }
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector<int>vec(256,0);

        int i = 0;
        int len = 0;
        int dup =0;
        int diff =0 ;
        int maxi = 0;

        for(int j=0;j<n;j++){
            vec[s[j]]++;
            len = j-i+1;
            dup = find(vec);
            diff = len-dup;
            while(diff>k){
                vec[s[i]]--;
                i++;
                len = j-i+1;
                dup = find(vec);
                diff = len-dup;


            }
            
            maxi = max(maxi,len);

            

            

        }
        return maxi;
        
    }
};