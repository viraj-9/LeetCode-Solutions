class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        vector<int> v(n);
        int right=1;
        int i=0;
        while(i<n){
            if(nums[i]%2==0){
                v[left]=nums[i];
                left+=2;
            }else{
                v[right]=nums[i];
                right+=2;
            }
            i+=1;
        }
        return v;
    }
};