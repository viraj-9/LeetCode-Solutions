class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int rows = nums.size();
        int cols = nums[0].size();
        int sum = 0;

        for(auto &row: nums){
            sort(row.begin(), row.end());
        }
        for(int i = 0; i<cols; i++){
            int maxi = 0;
            for(int j = 0; j<rows; j++){
                maxi = max(nums[j][i], maxi);
            }
            sum += maxi;
        }

        return sum;
    }
};