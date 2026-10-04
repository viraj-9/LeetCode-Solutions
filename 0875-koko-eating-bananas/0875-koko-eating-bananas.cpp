class Solution {
public:
    long long findTotal(vector<int>& piles, int rate){
        long long total = 0;
        for(int i = 0; i < piles.size(); i++){
            total += ceil((double)piles[i]/(double)rate);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long total = 0;
        long long max = *max_element(piles.begin(), piles.end());
        int low  = 1;
        int high = max;

        while(low <= high){
            long long mid = (low + high) / 2;
            total = findTotal(piles, mid);
            if(total <= h){
                high = mid - 1;
            } 
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};