class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        stack<char> st;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == ')'){
                st.pop();
            }
            if(!st.empty()){
                result += s[i];
            }
            if(s[i] == '('){
                st.push(s[i]);
            }
        }
        return result;
    }
};