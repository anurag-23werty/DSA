class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int leftMax = 0;
        int rightMax= 0;
        int total =0;
        while(i<j){
            leftMax = max(leftMax,height[i]);
            rightMax = max(rightMax,height[j]);
            if(leftMax<=rightMax){
                total+=leftMax-height[i++];
            }
            else{
                total+=rightMax-height[j--];
            }
        }
        return total;

        
    }
};