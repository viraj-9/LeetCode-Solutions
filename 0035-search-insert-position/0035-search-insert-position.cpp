class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0; 
        int right=nums.size()-1;
        int n = nums.size();
        int index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return index;
    }
};