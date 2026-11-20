class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int size = spaces.size();
        int n = s.length();
        string result = "";

        int start = 0;

        int i = 0;
        
        while(i < n){
            if(start < size && i == spaces[start] ){
                result += " ";
                start++;
            }else{
                result += s[i];
                i++;
            }
            
        }

        return result;
    }
};