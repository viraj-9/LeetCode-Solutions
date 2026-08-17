class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        // int sum1=0;
        // int sum2=0;
        
        vector<int> ans;
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(int i=1; i<=n; i++){
            if(mp[i]>1){
                ans.push_back(i);
            }
        }
        for(int i=1; i<=n; i++){
            if(mp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;

    }
};