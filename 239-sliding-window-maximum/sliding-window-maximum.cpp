class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      
        
       
        vector<int>ans;
        deque<int>st;
        
        for(int j=0;j<nums.size();j++){
            if(!st.empty()&&st.back()<=j-k){
                st.pop_back();
            }
            while(!st.empty() && nums[st.front()]<=nums[j]){
                st.pop_front();
            }
            st.push_front(j);
            if(j>=k-1) ans.push_back(nums[st.back()]);

        }
        return ans;  
        
    }
};