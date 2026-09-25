class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int end = upper_bound(nums.begin(), nums.end(), target) - nums.begin()-1;

        if(start == n || target != nums[start]){
            start = -1;
            end = -1;
        }
        return {start, end};
    }
};