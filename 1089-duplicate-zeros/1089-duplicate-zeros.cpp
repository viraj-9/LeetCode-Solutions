class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i, 0);
                i++;
            }
        }
        int newn = arr.size();
        int limit = newn-n;
        for(int i=n; i<n+limit; i++){
            arr.erase(arr.begin()+i);
        }
    }
};