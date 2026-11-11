class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        int prefprod = 1;
        int suffprod = 1;
        int pref = 1;
        int suff = 1;
        for(int i=0; i<n; i++){
            prefprod *= pref;
            pref = nums[i];
            result.push_back(prefprod);
        }

        for(int i = 0; i<n; i++){
            suffprod *= suff;
            suff = nums[n-i-1];
            result[n-i-1] = result[n-i-1] * suffprod;
        }
        
        return result;
    }
};