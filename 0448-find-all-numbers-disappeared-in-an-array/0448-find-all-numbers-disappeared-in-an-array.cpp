class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }

        for(int i = 1; i<=n; i++){
            if(mp[i]==0) v.push_back(i);
        }
        return v;
    }
};