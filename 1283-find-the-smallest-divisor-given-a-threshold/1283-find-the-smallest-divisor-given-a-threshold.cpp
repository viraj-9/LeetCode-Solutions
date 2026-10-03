class Solution {
public:
    int sum(vector<int>&nums, int threshold, int mid){
        int s = 0;
        for(int i = 0; i < nums.size(); i++){
            s += ceil((double)nums[i] / (double) mid);
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int max = *max_element(nums.begin(), nums.end());
        int ans = -1;
        int low = 1;
        int high = max;

        if(n > threshold) return n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(sum(nums, threshold, mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};