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
        sort(nums.begin(), nums.end());

        int low = 1;
        int high = nums[n-1];

        if(n > threshold) return n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(sum(nums, threshold, mid) <= threshold){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};