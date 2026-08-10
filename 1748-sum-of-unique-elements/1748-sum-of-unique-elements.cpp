class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp{{0, 0}};
        int n=nums.size();
        int max=nums[0];
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            if(nums[i]>max){
                max=nums[i];
            }
        }
        cout<<max;
        for(int i=nums[0]; i<=max; i++){
            if(mp[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};