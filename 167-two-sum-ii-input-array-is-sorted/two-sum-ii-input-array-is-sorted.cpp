class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        // while(i<=j){
        //     if(target-numbers[i]==numbers[j]) return vector<int> {i+1,j+1};
        //     else if(target-numbers[i]<numbers[j]) j--;
        //     else i++;
        // }
        while(i<=j){
            if(numbers[i]+numbers[j]==target) return{i+1,j+1};
            if(numbers[i]+numbers[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
    return {}   ;
    }
};