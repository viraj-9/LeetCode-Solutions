class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        int current;
        int count;
        for(int i=0; i<n; i++){
            current=nums[i];
            count=0;
            for(int j=0; j<n; j++){ 
                
                if(nums[j]<current){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};