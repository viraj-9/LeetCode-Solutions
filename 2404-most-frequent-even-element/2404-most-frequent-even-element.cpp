class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int maxi = -1;
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        int index = -1;
        for(int i = 0; i<n; i++){
            if(nums[i] % 2 == 0){
                mp[nums[i]]++;
            }
        }

        for(int i = 0; i<n; i++){
            if(mp[nums[i]] > maxi && nums[i] % 2 == 0){
                index = i;
                maxi = mp[nums[i]];
            }
        }

        if(index == -1) return -1;
        return nums[index];
    }
};