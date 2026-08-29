class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        bool res = false;
        if(n==1) return true;

        for(int i = 1; i<=sqrt(n); i++){

            if(pow(3, i)==n){
                res=true;
            }

        }
       // if(n==1) return true;
        return res;
    }
};