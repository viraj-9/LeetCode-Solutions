class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = nums[0];
        int n = nums.size();

        int low = 0; 
        int high = n - 1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[low] == nums[high]){
                mini = min(nums[low], mini);
                low++;
                continue;
            }
            if(nums[low] <= nums[mid]){
                mini = min(nums[low], mini);
                low = mid + 1;
            }
            else{
                mini = min(nums[mid], mini);
                high = mid - 1;
            }
        }
        return mini;
    }
};