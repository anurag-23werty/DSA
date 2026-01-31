class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        int index=0;
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[index]){
                index++;
            }
            else{
                i=i-index;
                index=0;
            }
            if(index==m){
                return i-index+1;
            }
        }
        return -1;
        
    }
};