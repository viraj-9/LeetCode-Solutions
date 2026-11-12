class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int count = 0;
        int sum = 0;
        vector<int> v;
        int left = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            count++;
            while(sum >= target){
                mini = min(mini, count);
                sum -= nums[left];
                count--;
                left++;
            }
        }
        if(mini == INT_MAX) return 0;
        return mini;
    }
};