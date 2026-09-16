class Solution {
public:
    int jump(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int count = 0;
        int end = 0;
        if(n==1) return 0;
        for(int i=0; i<n-1; i++){
            sum = max(sum, i+nums[i]);
            if(i==end){
                count++;
                end = sum;
            }
        }
        return count;
    }
};