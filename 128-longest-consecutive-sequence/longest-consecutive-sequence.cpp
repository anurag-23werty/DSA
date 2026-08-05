class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> st(nums.begin(), nums.end());
    int maxi=0;
    for (int x : st) {
            if (!st.count(x - 1)) {
                int len = 1;
                while (st.count(x + len))
                len++;
                maxi = max(maxi, len);
             }
    }
    return maxi;

        
    }
};