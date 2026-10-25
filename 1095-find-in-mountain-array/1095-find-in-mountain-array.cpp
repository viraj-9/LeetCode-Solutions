/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 1;
        int high = n - 2;
        int peakindex = -1;
        int ans = n;

        if(mountainArr.length() < 3) return -1;
        // if(mountainArr.get(0) > mountainArr.get(1)) peakindex = 0;
        // if(mountainArr.get(n-1) > mountainArr.get(n-2)) peakindex = n-1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)) low = mid + 1;
            else high = mid - 1;
        }

        cout<<peakindex;
        int peak = low;
        int right = low;
        low = 0;
        high = n-1;

        while(low <= right){
            int mid = (low + right) / 2;
            int val = mountainArr.get(mid);
            if(val == target) return mid;
            else if(val > target) right = mid - 1;
            else low = mid + 1;
        }

        low = peak+1;
        while(low <= high){
            int mid = (low + high) / 2;
            int val = mountainArr.get(mid);
            if(val == target) return mid;
            else if(val > target) low = mid + 1;
            else high = mid - 1;
        }
        
        return -1;
    }
};