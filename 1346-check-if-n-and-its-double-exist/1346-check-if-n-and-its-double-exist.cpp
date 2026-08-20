class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        int prod;
        bool result = false;
        for(int i=0; i<n; i++){
            prod=arr[i];
            for(int j=0; j<n; j++){
                if(i!=j){
                    if(arr[j]==prod*2){
                        result = true;
                        break;
                    }
                }
            }
        }
        return result;
    }
};