class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int m = matrix[0].size();
        int n = matrix[0].size()*matrix.size();
        for(int i=0;i<n;i++){
            pq.push(matrix[i/m][i%m]);
        }
        int ans=0;
        for(int i=1;i<=k;i++){
            if(i==k) ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};