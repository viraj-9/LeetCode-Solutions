class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        int miss = 0;
        set<int> s(arr.begin(), arr.end());
        for(int i = 1; i < arr[n-1]; i++){
            if(s.find(i) == s.end()){
                miss = i;
                count++;
            }
            if(count==k){
                return miss;
            }
        }

        return arr[n-1] + k-count;
    }
};