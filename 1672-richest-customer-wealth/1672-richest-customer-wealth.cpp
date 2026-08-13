class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
       
        int maxSum=0;
        for(int i=0; i<n; i++){
            int sum=0;
            int limit=accounts[i].size();
            for(int j=0; j<limit; j++){
                sum += accounts[i][j];
            }
            if(sum>maxSum){
                maxSum=sum;
            }
        }
        return maxSum;
    }

};