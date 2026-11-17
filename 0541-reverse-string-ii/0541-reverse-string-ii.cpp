class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();

        for(int i = 0; i<n; i+=(k+k)){
            int j = i+k-1;
            // if(j >= n) break;
            int left = i;
            int right = min(j, n-1);
            while(left <= right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};