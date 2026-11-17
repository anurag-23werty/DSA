class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int currentproduct = nums[0];
        int product = nums[0];
        int mini = nums[0];
        for(int i=1;i<n;i++){
            int x = currentproduct;
            currentproduct = max(currentproduct*nums[i],max(nums[i],mini*nums[i]));
            mini = min(x*nums[i],min(nums[i],mini*nums[i]));
            product = max(product,currentproduct);

        }
        return product;


        
    }
};