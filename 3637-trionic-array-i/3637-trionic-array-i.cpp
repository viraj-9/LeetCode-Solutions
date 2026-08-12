class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int min=nums[0];
        bool result = true;
        int p=-1;
        int index;
        if(n<4){
            return false;
        }
        if(nums[1]<nums[0]){return false;}
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<nums[i-1]){
                p=i;
                break;
            }
            if(nums[i]==nums[i-1]){
                return false;
            }
        }
        if(p==-1 || p==1){
            return false;
        }
        int q=-1;
        for(int i=p; i<n; i++){
            if(nums[i]>nums[i-1]){
                q=i-1;
                break;
            }
            if(nums[i]==nums[i-1]){
                return false;
            }
        }
        if(q==-1 || q==1) return false;
        for(int i=q+1; i<n; i++){
            if(nums[i]<nums[i-1]){
                result=false;
            }
            if(nums[i]==nums[i-1]){
                return false;
            }
        }
        cout<<nums[p]<<" "<<nums[q];
        return result;
    }
};