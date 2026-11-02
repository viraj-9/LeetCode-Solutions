class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int median = 0;

        if(n%2 == 0) median = nums[((n/2) + ((n/2)-1)) / 2];
        else median = nums[n/2];

        int moves = 0;

        for(int i = 0; i < n; i++){
            moves += abs(median - nums[i]);
        }

        return moves;
    }
};

// int n = nums.size();
//         int mini = INT_MAX;
//         for(int i = 0; i<n; i++){
//             int target = nums[i];
//             int moves = 0;
//             for(int j = 0; j<n; j++){
//                 if(i != j){
//                     moves += abs(target - nums[j]);
//                 }
//             }
//             mini = min(moves, mini);

//         }
//         return mini;