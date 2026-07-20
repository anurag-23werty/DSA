class Solution {
public:
    int nextIndex(int curr,vector<int>&nums){
        int next = curr;
        int seq = nums[next];
        int n =nums.size();
        if(seq>0){
            next = ((next+seq)% n+n)%n;
        }
        else{
            
            next = ((next+seq)% n+n)%n;
        }
        return next;

            
    }
    bool circularArrayLoop(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            // unordered_set<int>st;
            // st.insert(i);
             if(nums[i]==0) continue;
            int pos = nums[i]>0;
            int curr=i;
            int slow=i;
            int fast =i;
            do{
                slow = nextIndex(slow,nums);
                fast = nextIndex(fast,nums);
                if(pos){
                    if(nums[fast]<0) break;

                }
                else{
                    if(nums[fast]>0) break;
                }
                fast = nextIndex(fast,nums);
                if(pos){
                    if(nums[fast]<0) break;

                }
                else{
                    if(nums[fast]>0) break;
                }
                if(slow==fast){
                    if(slow == nextIndex(slow,nums)) break;
                    else return true;
                }
            }while(slow!=fast);

            // while(true){
            //     int next = nextIndex(curr,nums);
            //     if(pos){
            //         if(nums[next]<0) break;
            //         else{
            //             if(st.find(next)!=st.end()){
            //                 if(curr!=next) return true;
            //                 else break;
            //             }
                        
            //             st.insert(next);
            //         }
            //     }
            //     else{
            //         if(nums[next]>0) break;
            //         else{
            //             if(st.find(next)!=st.end()){
            //                 if(curr!=next) return true;
            //                 else break;
            //             }
            //             st.insert(next);
            //         }
            //     }
            //     curr=next;

            // }
            curr = i;
            if(pos){
                while(nums[curr]>0){
                    int next = nextIndex(curr,nums);
                    nums[curr]=0;
                    curr= next;

                }
            }
            else{
                while(nums[curr]<0){
                    int next = nextIndex(curr,nums);
                    nums[curr]=0;
                    curr= next;

                }

            }
        }
        return false;

        
        
    }
};