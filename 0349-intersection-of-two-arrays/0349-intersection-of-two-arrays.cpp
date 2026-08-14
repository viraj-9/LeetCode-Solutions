class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(nums1[i]==nums2[j]){
                    result.insert(nums1[i]);
                }
            }
        }
        vector<int> ans(result.begin(), result.end());
        return ans;
    }
};