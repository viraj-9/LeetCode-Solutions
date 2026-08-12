class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int left=0; 
        int high=n-1;
        while(left<=high){
            if(numbers[left]+numbers[high]==target){
                return {left+1, high+1};
            }else if(numbers[left]+numbers[high]<target){
                left++;
            }else{
                high--;
            }
        }
        return {0};
    }
};
// for(int i=0; i<n; i++){
//             for(int j=1; j<n; j++){
//                 if(numbers[i]+numbers[j]==target && numbers[i]!=numbers[j]){
//                     result.push_back(i+1);
//                     result.push_back(j+1);
//                 }
//             }
//         }