class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool result = false;
        //sort(num.begin(), nums.end());
        int mcount = 0;
        int scount = 0;
        for(int i = 1; i<n; i++){
            if(nums[i]>=nums[i-1]){
                mcount++;
            }
            if(nums[i]<=nums[i-1]){
                scount++;
            }
        }
        // cout<<count;
        if(mcount==n-1 || scount==n-1){
            result = true;
        }
        return result;
    }
};