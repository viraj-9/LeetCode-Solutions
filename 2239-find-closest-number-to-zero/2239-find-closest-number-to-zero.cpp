class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        // sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            
            if(abs(0 + nums[i]) < mini){
                mini = abs(0 + nums[i]);
                ans = nums[i];
            }
            if(abs(nums[i]) == mini && nums[i] > 0){
                ans = abs(nums[i]);
            }

        }
        return ans;
    }
};