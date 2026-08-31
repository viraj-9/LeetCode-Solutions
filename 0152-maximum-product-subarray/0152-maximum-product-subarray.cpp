class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            product=1;
            for(int j=i; j<n; j++){
                product=product*nums[j];
                maxi=max(product, maxi);    
            }
            
        }
        return maxi;
    }
};