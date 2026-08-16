class Solution {
public:
void backtrack(vector<vector<int>>&ans,vector<int>per,vector<int>&nums,int start){
    ans.push_back(per);
    for(int i=start;i<nums.size();i++){
        per.push_back(nums[i]);
        backtrack(ans,per,nums,i+1);
        per.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>per;
        sort(nums.begin(),nums.end());
        backtrack(ans,per,nums,0);
        return ans;

        
    }
};