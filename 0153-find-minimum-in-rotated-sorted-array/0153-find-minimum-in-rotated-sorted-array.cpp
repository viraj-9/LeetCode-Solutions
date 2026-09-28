class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        int left = 0; 
        int right = nums.size()-1;

        while(left <= right){
            int mid = (left + right) /2;
            if(nums[left] <= nums[mid]){
                mini = min(nums[left], mini);
                left = mid + 1;
            }else{
                mini = min(nums[mid], mini);
                right = mid - 1;
            }
        }
        return mini;
    }
};