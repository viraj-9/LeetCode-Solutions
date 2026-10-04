class Solution {
public:
    int findCount(vector<int>& bloomDay, int n, int day, int k){
        int count = 0;
        int bloomed = 0;

        for(int i = 0; i < n; i++){
            if(bloomDay[i] <= day){
                bloomed++;
            }else bloomed = 0;

            if(bloomed == k){
                count++;
                bloomed = 0;
            }
        }
        return count;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // if(k==1) return m;
        if((long long)m*k > n) return -1;
        
        int low = 1;
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low <= high){
            int mid = (low + high) / 2;
            int count = findCount(bloomDay, n, mid, k);
            if(count >= m){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};