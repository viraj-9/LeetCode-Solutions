class Solution {
public:
    int mergeSort(vector<long long> &prefSum, int low, int high, int lower, int upper){
        int count=0;
        if(low>=high){
            return count;
        }
        
        int mid = (low+high)/2;
        int leftcount = mergeSort(prefSum, low, mid, lower, upper);
        int rightcount = mergeSort(prefSum, mid+1, high, lower, upper);
        int mergecount = merge(prefSum, low, mid, high, lower, upper);
        return (leftcount+rightcount+mergecount);
    }
    int merge(vector<long long> &prefSum, int low, int mid, int high, int lower, int upper){
        int count = 0;

        // Count valid cross-half pairs
        int j1 = mid + 1;
        int j2 = mid + 1;

        for (int i = low; i <= mid; i++) {

            while (j1 <= high &&
                   prefSum[j1] - prefSum[i] < lower) {
                j1++;
            }

            while (j2 <= high &&
                   prefSum[j2] - prefSum[i] <= upper) {
                j2++;
            }

            count += j2 - j1;
        }

        vector<long long> temp;

        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {

            if (prefSum[left] <= prefSum[right]) {
                temp.push_back(prefSum[left]);
                left++;
            }
            else {
                temp.push_back(prefSum[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(prefSum[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(prefSum[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            prefSum[i] = temp[i - low];
        }
        return count;
    }
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        vector<long long> prefSum;
        int n = nums.size();
        long long sum = 0;

        prefSum.push_back(sum);
        for(int i=0; i<n; i++){
            sum += nums[i];
            prefSum.push_back(sum);
        }

        int count = mergeSort(prefSum, 0, prefSum.size()-1, lower, upper);
        return count;
    }
};


// Brute
// class Solution {
// public:
//     int countRangeSum(vector<int>& nums, int lower, int upper) {
//         int n = nums.size();
//         int count = 0;
//         for(int i = 0; i < n; i++){
//             long long sum = 0;
//             for(int j = i; j < n; j++){
//                 sum = sum + nums[j];
//                 if(sum >= lower && sum <= upper){
//                     count++;
//                 }

//             }
//         }
//         return count;
//     }
// };