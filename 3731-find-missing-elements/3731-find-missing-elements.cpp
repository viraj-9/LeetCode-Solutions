class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp{{0, 0}};
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(int i=nums[0]; i<nums[n-1]; i++){
            if(mp[i]==0){
                result.push_back(i);
            }
        }
        return result;
    }
};