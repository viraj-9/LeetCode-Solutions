class Solution {
public:
    bool validMountainArray(vector<int>& arr) { 
        int n = arr.size();
        bool wentup = false;
        bool wentdown = false;
        if(n<=2){
            return false;
        }
        
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                if(wentdown==true) return false;
                wentup = true;
            }else if(arr[i]<arr[i-1]){
                wentdown = true;
            }else{
                wentup = false;
                break;
            }
        }

        if(wentup == true && wentdown == true){
            return true;
        }
        return false;
    }
};