class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int initial=0;
        for(int i=0; i<n; i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                initial -= 1;
            }else{
                initial += 1;
            }
        }
        return initial;
    }
};