class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels=0;
        int maxi=0;
        int i=0;
        int x=0;
        for(int j=0;j<s.length();j++){
            
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                vowels++;
                
            }
            x++;
            if(x==k){
                x--;
                maxi = max(maxi,vowels);
                if(maxi>k) maxi=k;
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    vowels--;
                }
                i++;
            }
        }
        return maxi;
    }
};