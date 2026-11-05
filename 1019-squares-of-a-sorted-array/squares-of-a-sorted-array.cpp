class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i] = pos[i]*pos[i];
            }
            return pos;
        }
        else if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i] = neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        int i= 0 ;
        int j =0 ;
        int id =0 ;
        for(int k=0;k<neg.size();k++){
            neg[k] = neg[k]*neg[k];
        }
        reverse(neg.begin(),neg.end());
        for(int k=0;k<pos.size();k++){
            pos[k]= pos[k]*pos[k];
        }
        while(i<neg.size() && j<pos.size()){
            if(neg[i]<pos[j]){
                nums[id++] = neg[i];
                i++;

            }
            else{
                nums[id++] = pos[j];
                j++;
            }
        }
        while(i<neg.size()){
            nums[id++] = neg[i++];
        }
        while(j<pos.size()){
            nums[id++] = pos[j++];
        }
        return nums;

        
    }
};