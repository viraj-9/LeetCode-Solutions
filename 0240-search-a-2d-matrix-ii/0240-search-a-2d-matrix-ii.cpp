class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        
        for(int i=0; i<n; i++){
            int low=0;
            int high=matrix[i].size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(target==matrix[i][mid]){
                    return true;
                }else if(target<matrix[i][mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
        return false;
    }
};