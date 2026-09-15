class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return true;
        if(nums[0]==0) return false;
        int i;
        int sum=0;
        for(i=0; i<n-1; i++){
            sum = nums[i]+i;
            if(sum<=i){
                return false;
            }
            if(sum>=n-1){
                return true;
            }
            for(int j=i+1; j<=sum; j++){
                if(nums[j]+j >= n-1){
                    return true;
                }
                if(nums[j]+j > sum){
                    sum = nums[j]+j;
                }
            }
        }
        return false;
    }
};