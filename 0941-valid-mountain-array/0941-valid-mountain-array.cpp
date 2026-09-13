class Solution {
public:
    bool validMountainArray(vector<int>& arr) { 
        int n = arr.size();
        int p=1;
        if(n<=2){
            return false;
        }
        int count=0;
        bool result = false;
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                result = true;
                count++;
            }else if(arr[i]==arr[i-1]){
                return false;
            }else{
                p=i;
                break;
            }
        }

        cout<<p;
        if(count == 0){
            p=0;
        }
        for(int i=p+1; i<n; i++){
            if(arr[i]<arr[i-1]){
                result = true;
                count++;
            }else if(arr[i]==arr[i-1]){
                return false;
            }else{
                result=false;
                break;
            }
        }
        if(count==n-1){
            result = false;
        }
        return result;
    }
};