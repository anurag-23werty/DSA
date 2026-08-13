class Solution {
public:
        multiset<int>left;
        multiset<int>right;
        void balance(){
            while(left.size()>right.size()+1){
                auto it = prev(left.end());
                right.insert(*it);
                left.erase(it);
            }
            while(right.size()>left.size()){
                auto it= right.begin();
                left.insert(*it);
                right.erase(it);
            }
        }
        void add(int x){
            if(left.empty()|| x< *prev(left.end())){
                left.insert(x);
            }
            else{
                right.insert(x);
            }
            balance();
            
            
        }
        void remove(int x){
            auto it = left.find(x);
            if(it!= left.end()){
                left.erase(it);
            }
            else{
                it = right.find(x);
                right.erase(it);
                
            }
            balance();
        }
        double median(int k){
            if(k%2==1){
                return *prev(left.end());
            }
            else{
                return (((double)*prev(left.end())+*right.begin())/2.0);
            }
        }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double>ans;
        for(int i=0;i<nums.size();i++){
            add(nums[i]);
            if(i>=k-1){
                ans.push_back(median(k));
                remove(nums[i-k+1]);
            }
        }
        return ans;
        
        
    }

};