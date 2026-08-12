class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int limit=nums.size();
        int mid=n;
        vector<int> result;
        int left=0;
        for(int i=0; i<limit; i++){
            if(i%2==0){
                result.push_back(nums[left]);
                left++;
            }else{
                result.push_back(nums[mid]);
                mid++;
            }
        }
        return result;
    }
};
// int limit = nums.size();
//         int mid = limit/2;
//         for(int i=1; i<limit-1; i+=2){
//             nums.insert(nums.begin()+i, nums[mid]);
//             mid++;
//             nums.erase(nums.begin()+mid);
//         }
//         return nums;