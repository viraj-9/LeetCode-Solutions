class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxi = INT_MIN;
        int row = mat.size();
        int col = mat[0].size();
        int one = -1;
        int two = -2;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(mat[i][j] > maxi){
                    maxi = mat[i][j];
                    one = i;
                    two = j;
                }
            }
        }
        return {one, two};
    }
};