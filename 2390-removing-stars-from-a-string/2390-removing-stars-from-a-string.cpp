class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string result = "";
        int n = s.length();

        for(int i = 0; i<n; i++){
            if(s[i] == '*') result.pop_back();
            else result.push_back(s[i]);
        }

        return result;
    }
};