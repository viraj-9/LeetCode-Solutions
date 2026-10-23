class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;
        while(left <= right){
            char c1 = s[left];
            char c2 = s[right];
            s[left] = c2;
            s[right] = c1;
            left++;
            right--;
        }

    }
};