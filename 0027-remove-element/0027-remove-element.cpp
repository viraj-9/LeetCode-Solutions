class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(val==nums[i]){
                nums[i]=0;
            }
            else{
                count++;
            }
        }

        // for(int i: nums){
        //     cout<<i;
        // }
        sort(nums.begin(), nums.end(), greater<int>());
        return count;
    }
};