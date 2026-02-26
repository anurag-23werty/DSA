class Solution {
public:
    void findComb(int index,vector<int>&ds,vector<int>&arr,vector<vector<int>>&ans,int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<arr.size();i++){
            if(i>index && arr[i]==arr[i-1]) continue;
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            findComb(i+1,ds,arr,ans,target-arr[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        findComb(0,ds,candidates,ans,target);
        return ans;
        
    }
};