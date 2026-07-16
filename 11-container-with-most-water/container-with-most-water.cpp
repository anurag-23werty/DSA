class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxi = 0;
        while(i<=j){
            maxi = max(maxi,(j-i)*min(height[j],height[i]));
            if(min(height[j],height[i])==height[i]) i++;
            else j--;
        }
    return maxi;
        
    }
};