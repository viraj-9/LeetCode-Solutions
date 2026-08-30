class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int count=0;
        int maxcount=0;
        for(auto it: mp){
            int x = it.first;
            if(mp.find(x-1) == mp.end()){
                count = 1;
                while(mp.find(x+1) != mp.end()){
                    count++;
                    x++;
                }
                maxcount=max(count, maxcount);
            }
        }
        return maxcount;
        

    }
};