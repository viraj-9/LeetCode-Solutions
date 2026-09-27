class Solution {
public:

    int findFirst(vector<int>& nums, int target){
        int n = nums.size();
        int left = 0;
        int right = n-1;

        int first = -1;
        while(left<=right){
            int mid = (left + right) / 2;

            if(nums[mid]==target){
                first = mid;
                right = mid - 1;
            }
            else if(nums[mid]>target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return first;
    }
    int findLast(vector<int>& nums, int target){
        int n = nums.size();
        int last = -1;

        int left = 0;
        int right = n-1;

        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                last = mid;
                left = mid + 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first = findFirst(nums, target);
        if(first == -1) return {-1, -1};
        int last = findLast(nums, target);
        return {first, last};
    }
};