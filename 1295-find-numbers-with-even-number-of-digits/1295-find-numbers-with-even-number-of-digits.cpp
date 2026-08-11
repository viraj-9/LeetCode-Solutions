class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int result=0;
        for(int i=0; i<nums.size(); i++){
            int count=0;
            int no=nums[i];
            while(no>0){
                no/=10;
                count++;
            }
            if(count%2==0){
                result++;
            }
        }
        return result;
    }
};