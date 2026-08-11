class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        // vector<int> result;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            int no=target-numbers[i];
            if(mp.find(no) != mp.end()){
                return {mp[no]+1, i+1};
            }
            mp[numbers[i]]=i;
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