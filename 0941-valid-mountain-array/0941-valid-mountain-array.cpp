class Solution {
public:
    bool validMountainArray(vector<int>& arr) { 
        int n = arr.size();
        int p=1;
        if(is_sorted(arr.begin(), arr.end()) || is_sorted(arr.begin(), arr.end(), greater<int>())){
            return false;
        }
        if(n<=2){
            return false;
        }

        while(p<n){
            if(arr[p]>arr[p-1]){
                p++;
            }else if(arr[p]==arr[p-1]){
                return false;
            }else{
                break;
            }
        }

        int q;
        if(p==n-1){
            q=p;
        }else q=p+1;
        cout<<q;

        while(q<n){
            if(arr[q]<arr[q-1]){
                q++;
            }else{
                return false;
            }
        }
        cout<<p;
        return true;
    }
};