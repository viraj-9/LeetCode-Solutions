class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int diagonal = matrix[0][0];
        int ans = false;
        for(int i = 1; i<n; i++){
            for(int j = 1; j<matrix[i].size(); j++){
                if(matrix[i-1][j-1] != matrix[i][j]) return false;
            }
        }
        return true;
    }
};