class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 1;
        int high = n-2;
        int ans = INT_MIN;
        int index = -1;
        if(arr[0] > arr[1]) ans = arr[0];
        if(arr[n-1] > arr[n-2]) ans = arr[n-1];
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
                ans = mid;
                break;
            }
            else if(arr[mid] < arr[mid+1]) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }
};