class Solution {
public:
    int nextIndex(int curr,vector<int>&nums){
        int next = curr;
        int seq = nums[next];
        int n =nums.size();
        if(seq>0){
            next = (next+seq)%nums.size();
        }
        else{
            
            next = ((next+seq)% n+n)%n;
        }
        return next;

            
    }
    bool circularArrayLoop(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            unordered_set<int>st;
            st.insert(i);
            int pos = nums[i]>0;
            int curr=i;

            while(true){
                int next = nextIndex(curr,nums);
                if(pos){
                    if(nums[next]<0) break;
                    else{
                        if(st.find(next)!=st.end()){
                            if(curr!=next) return true;
                            else break;
                        }
                        
                        st.insert(next);
                    }
                }
                else{
                    if(nums[next]>0) break;
                    else{
                        if(st.find(next)!=st.end()){
                            if(curr!=next) return true;
                            else break;
                        }
                        st.insert(next);
                    }
                }
                curr=next;

            }
        }
        return false;

        
        
    }
};