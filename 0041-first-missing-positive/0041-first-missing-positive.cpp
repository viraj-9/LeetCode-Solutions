class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==1 && nums[0] != 1) return 1;
        set<int> s;
        for(int i: nums){
            if(i>0) s.insert(i);
        }
        int maxi = *max_element(s.begin(), s.end());
        cout<<maxi;
        for(int i = 1; i<=maxi; i++){
            if(s.find(i) == s.end()) return i;
        }
        return maxi + 1;
    }
};