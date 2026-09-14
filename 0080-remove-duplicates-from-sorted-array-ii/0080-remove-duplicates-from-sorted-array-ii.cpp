class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp{{0, 0}};
        int n=nums.size();
        // if(nums.size()<=2) return nums.size();
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(mp[nums[i]]>2){
                mp[nums[i]]-=1;
                nums.erase(nums.begin()+i);
                i--;
                
            }
        }
        return nums.size();
    }
};