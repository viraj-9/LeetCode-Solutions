class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0; 
        int right=nums.size()-1;
        int n;
        while(left<=right){
            int mid=(left+right)/2;
            if(left==right){
                if(nums[left]<target) return left+1;
                else return left;
            }
            if(target>nums[mid]){
                left=mid+1;
            }else if(target<nums[mid]){
                right=mid-1;
            }else{
                return mid;
            }
            
        }
        return left;
    }
};