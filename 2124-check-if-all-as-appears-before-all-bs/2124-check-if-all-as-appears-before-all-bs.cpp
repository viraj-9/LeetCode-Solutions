class Solution {
public:
    bool checkString(string s) {
        int n = s.length();

        int index = -1;
        for(int i = 0; i<n; i++){
            if(s[i] == 'b'){
                index = i;
                break;
            }
        }
        if(index == -1) return true;
        for(int j = index; j<n; j++){
            if(s[j] == 'a') return false;
        }

        return true;
    }
};