class Solution {
public:
    long long calculateTotal(vector<int>&piles , int h){
        long long ans = 0; 
        for(long long i =0 ;i<piles.size();i++){
            ans+=ceil((double)piles[i]/h);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(),piles.end());
        int left =1;
        int right = maxi;
        while(left<=right){
            int mid = left +(right-left)/2;
            long long x =calculateTotal(piles,mid);
            if(x<=h){
                right = mid-1;
            }
            else{
                left= mid+1;
            }
        }
        return left;
        
    }
};