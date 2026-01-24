class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int k=nums.size();
        vector<vector<int>>vec;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            int j=i+1;
            int p=k-1;
            int third=-(nums[i]);
            while(j<p){
                int ans=nums[j]+nums[p];
                if(ans<third){
                    j++;
                }  
                else if(ans>third){
                    p--;
                }  
                else{
                    vector<int>v{nums[i],nums[j++],nums[p--]};
                    vec.push_back(v);
                    
                    while(j<p && nums[j]==nums[j-1]) j++;
                    while(j<p && nums[p+1]==nums[p]) p--;
                } 
            }   
        }
        
        

       
        
        return vec;
        
    }
};