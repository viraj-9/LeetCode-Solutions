class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.length();

        for(int i = 0; i<n; i++){
            if(s[i] == '*') st.pop();
            else st.push(s[i]);
        }
        string result = "";
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        int left = 0;
        int right = result.length()-1;

        while(left <= right){
            swap(result[left], result[right]);
            left++;
            right--;
        }
        return result;
    }
};