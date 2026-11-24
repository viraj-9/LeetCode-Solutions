class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();

        int left = 0;
        int right = 0;

        string result = "";

        while(left < n1 && right < n2){
            result += word1[left];
            result += word2[right];
            left++;
            right++;
        }
        if(n1 > n2){
            while(left < n1){
                result += word1[left];
                left++;
            }
        }else{
            while(right < n2){
                result += word2[right];
                right++;
            }
        }

        return result;
    }
};