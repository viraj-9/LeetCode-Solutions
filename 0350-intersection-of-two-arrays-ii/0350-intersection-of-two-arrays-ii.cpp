class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    if(mp.find(j)==mp.end()){
                        ans.push_back(nums2[j]);
                        mp[j]=nums2[j];
                        break;
                    }
                }
            }
        }
        return ans;
    }
};