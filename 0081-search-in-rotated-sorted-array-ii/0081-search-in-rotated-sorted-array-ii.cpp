class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        bool result = false;
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                result=true;
                break;
            }
        }
        return result;
    }
};