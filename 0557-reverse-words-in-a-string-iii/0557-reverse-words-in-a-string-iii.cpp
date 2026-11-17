class Solution {
public:
    string findRev(string s){
        int left = 0;
        int right = s.length()-1;

        while(left <= right){
            swap(s[left], s[right]);
            left++;
            right--;
        }

        return s;
    }
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        string ans = "";
        string word = "";
        for(int i = 0; i<n; i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                ans += findRev(word) + " ";
                word = "";
            }
        }
        if(word != " ") ans += findRev(word);

        return ans;
    }
};