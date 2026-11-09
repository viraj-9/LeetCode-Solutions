class Solution {
public:
    string reverseWords(string s) {
        int n = s.length(); 
        vector<string> contain;
        string word = "";

        for(int i = 0; i<n; i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                 if(word != "") {
                    contain.push_back(word);
                    word = "";
                }
            }
        }
        if(word != "") {
            contain.push_back(word);
        }        

        string result = "";
        for(int i = contain.size()-1; i>=0; i--){
            
            if(i == 0) result += contain[i];
            else result = result + contain[i] + " ";
        }
        
        return result;
    }
};