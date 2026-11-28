class Solution {
public:
    bool validateRow(vector<vector<char>>& board){
        int rows = board.size();
        int cols = board[0].size();
        
        for(int i = 0; i<rows; i++){
            unordered_map<int, char> mp;
            for(int j = 0; j<cols; j++){
                if(board[i][j] != '.'){
                    if(mp.find(board[i][j]) != mp.end()){
                        return false;
                    }else mp[board[i][j]] = board[i][j];
                }
            }
        }
        return true;
    }
    bool validateCol(vector<vector<char>>& board){
        int rows = board.size();
        int cols = board[0].size();
        
        for(int i = 0; i<rows; i++){
            unordered_map<int, char> mp;
            for(int j = 0; j<cols; j++){
                if(board[j][i] != '.'){
                    if(mp.find(board[j][i]) != mp.end()){
                        return false;
                    }else mp[board[j][i]] = board[j][i];
                }
            }
        }
        return true;
    }
    bool validateMatrix(vector<vector<char>>& board, int r, int c){
        unordered_map<int, char> mp;
        for(int i = r; i<r+3; i++){
            for(int j = c; j<c+3; j++){
                if(board[i][j] != '.'){
                    if(mp.find(board[i][j]) != mp.end()){
                        return false;
                    }else mp[board[i][j]] = board[i][j];
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        int ans = false;
    
        for(int i = 0; i<rows; i+=3){
            for(int j = 0; j<cols; j+=3){
                if(validateMatrix(board, i, j)) ans = true;
                else{
                    return false;
                } 
            }
        }
        if(ans == true && validateRow(board) && validateCol(board)) return true;
        else return false;
    }
};