class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1) return 0;
        for(int i = 0; i < n; i++){
            int sumleft = 0;
            int sumright = 0;
            for(int j = 0; j < i; j++){
                sumleft += nums[j];
            }
            for(int k = i+1; k < n; k++){
                sumright += nums[k];
            }
            if(sumleft == sumright) return i;
        }

        return -1;
    }
};