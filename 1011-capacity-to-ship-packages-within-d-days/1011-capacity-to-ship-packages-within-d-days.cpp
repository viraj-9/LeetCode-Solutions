class Solution {
public:
    int findCap(vector<int>& weights, int cap){
        int days = 1; 
        int load = 0;
        for(int i = 0; i < weights.size(); i++){
            if(load + weights[i] > cap){
                load = weights[i];
                days = days + 1;
            }else{
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for(int i = 0; i < n; i++){
            high += weights[i];
        }

        while(low <= high){
            int mid = (low + high) / 2;
            int daysReq = findCap(weights, mid);

            if(daysReq <= days) high = mid - 1;
            else low = mid + 1;
        }
        
        return low;

    }
};