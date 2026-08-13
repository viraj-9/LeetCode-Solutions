class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        // nums.reserve(2*n);
        vector<int> ans(2*n);
        for(int i=0; i<n; i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
};

// int n=nums.size();
//         nums.reserve(2*n);
//         for(int i=0; i<n; i++){
//             nums.push_back(nums[i]);
//         }
//         return nums;