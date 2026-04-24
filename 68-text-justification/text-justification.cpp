class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int i=0;
        int n=words.size();
        while(i<n){
            int len_line=words[i].size();
            int j=i+1;
            while(j<n && (len_line+1+words[j].size())<=maxWidth){
                len_line+=1+words[j++].size();
            }
            int num_words=j-i;
            string line="";
            if(j==words.size() || num_words==1){
                for(int k=i;k<j;k++){
                    line+=words[k];
                    if(k<j-1) line+=" ";
                }
                while(line.size()<maxWidth) line+=" ";
            }
            else{
                int total_chars=0;
                for(int l=i;l<j;l++){
                    total_chars+=words[l].size();
                }
                int total_spaces=maxWidth-total_chars;
                int gaps=num_words-1;
                int space_each=total_spaces/gaps;
                int extras=total_spaces%gaps;
                for(int x=i;x<j-1;x++){
                    line+=words[x];
                    int spaces=space_each+(1 ? x-i<extras : 0);
                    line+=string(spaces,' ');

                }
                line+=words[j-1];
            }
                ans.push_back(line);
                i=j;
                    
        }
        return ans;
            
        }
        
    };
