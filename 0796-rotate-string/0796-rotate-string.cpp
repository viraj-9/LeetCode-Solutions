class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();

        if(n != goal.size()) return false;
        for(int i = 0; i<n; i++){
            char c = s[0];
            for(int j = 1; j<n; j++){
                s[j-1] = s[j];
            }
            s[n-1] = c;
            if(s == goal) return true;
        }

        // cout<<s;

        return false;
    }
};