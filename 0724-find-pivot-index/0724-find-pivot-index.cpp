class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1) return 0;
        int mid = 0;
        while(mid < n){
            
            int sumleft = 0;
            int sumright = 0;
            for(int i = 0; i<mid; i++){
                sumleft += nums[i];
            }
            for(int j = mid + 1; j<n; j++){
                sumright += nums[j];
            }

            // if(mid == 0 && sumleft == sumright) return 0;
            if(sumleft == sumright) return mid;
            else mid++;
        }
        return -1;
    }
};