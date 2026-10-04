class Solution {
public:
    long long findTotal(vector<int>& piles, int h){
        long long total = 0;
        for(int i = 0; i < piles.size(); i++){
            total += ceil((double)piles[i]/(double)h);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long total = 0;
        long long max = *max_element(piles.begin(), piles.end());
        sort(piles.begin(), piles.end());
        int low  = 1;
        int high = max;
        int ans = 0;

        while(low <= high){
            long long mid = (low + high) / 2;
            total = findTotal(piles, mid);
            if(total <= h){
                ans = mid;
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};