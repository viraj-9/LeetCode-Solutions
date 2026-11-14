class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> words;
        string word = " ";
        for(int i = 0; i<s.length(); i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                if(word != " "){
                    words.push_back(word);
                    word = " ";
                }
            }
        }
        if(word != " "){
            words.push_back(word);
        }


        int size = words.size()-1;
        string len = words[size];
        return len.length()-1;
    }
};