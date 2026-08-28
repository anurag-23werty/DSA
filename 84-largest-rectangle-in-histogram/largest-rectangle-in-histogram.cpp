class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
        vector<int>left(n);
        vector<int>right(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            left[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            right[i] = st.empty()?n:st.top();
            st.push(i);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            int width = (right[i]-left[i])-1;
            maxi = max(maxi,heights[i]*width);
        }
        return maxi;
        
    }
};