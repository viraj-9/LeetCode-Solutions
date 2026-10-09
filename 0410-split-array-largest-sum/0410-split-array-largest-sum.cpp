class Solution {
public:
    int allocate(vector<int>& nums, int s){
        int counts = 1; 
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] + sum <= s){
                sum += nums[i];
            }else{
                counts++;
                sum = nums[i];
            }
        }

        return counts;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = 0;
        for(int i = 0; i < n; i++){
            high += nums[i];
        }

        while(low <= high){
            int mid = (low + high) / 2;
            if(allocate(nums, mid) <= k) high = mid - 1;
            else low = mid + 1;
        }

        return low;
    }
};