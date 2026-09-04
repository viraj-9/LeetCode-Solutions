class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int stable=-1;
        int result = INT_MAX;
        for(int i=0; i<n; i++){
            int mini=INT_MAX;
            int maxi=INT_MIN;
            for(int j=0; j<=i; j++){
                if(nums[j]>maxi){
                    maxi=nums[j];
                }
            }
            for(int t=i; t<n; t++){
                if(nums[t]<mini){
                    mini=nums[t];
                }
            }
            result = min(result, maxi-mini);
            // if(mini==maxi){
            //     stable=i;
            //     break;
            // }
            if(result<=k){
                stable = i;
                break;
            }
            
        }
        return stable;
    }
};