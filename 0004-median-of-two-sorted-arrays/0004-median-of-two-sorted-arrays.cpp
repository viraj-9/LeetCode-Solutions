class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> temp;

        int left = 0;
        int right = 0;

        while(left<n1 && right<n2){
            if(nums1[left] <= nums2[right]){
                temp.push_back(nums1[left]);
                left++;
            }else{
                temp.push_back(nums2[right]);
                right++;
            }
        }

        while(left<n1){
            temp.push_back(nums1[left]);
            left++;
        }
        while(right<n2){
            temp.push_back(nums2[right]);
            right++;
        }

        int s = temp.size();
        int mid = (0 + s-1) / 2;
        if(s%2 == 0) return (double)(temp[mid] + temp[mid+1]) / 2;
        else return double(temp[mid]);

    }
};