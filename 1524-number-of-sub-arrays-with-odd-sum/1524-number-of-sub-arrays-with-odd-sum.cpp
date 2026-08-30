class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        const long long mod = 1000000007;
        long long oddcount=0;
        long long evencount=1;
        long long prefSum=0;
        long long count=0;
        for(int i=0; i<n; i++){
            prefSum+=arr[i];
            if(prefSum%2!=0){
                count = (count+evencount)%mod;
                oddcount++;
            }else{
                count = (count+oddcount)%mod;
                evencount++;
            }
        }
        return count;
    }
};