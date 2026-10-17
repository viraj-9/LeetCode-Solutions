class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return {};
        vector<int> v;
        unordered_map<int, int> mp;

        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }

        for(int i=1; i<=n; i++){
            if(mp[i]>1){
                v.push_back(i);
            }
        }
        return v;
    }
};