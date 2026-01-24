class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxi=0;
        int left_h=height[left];
        int right_h=height[right];
        while(left<right){
            if(height[left]<=height[right]){
                maxi=max(maxi,(right-left)*height[left]);
                left++;
                while(left<right && height[left]<left_h){
                    left++;
                }

            }
            else{
                maxi=max(maxi,(right-left)*height[right]);
                right--;
                while(left<right && height[right]<right_h){
                    right--;
                }

            }
        }
        return maxi;
        
    }
};