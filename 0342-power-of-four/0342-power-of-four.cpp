class Solution {
public:
    bool isPowerOfFour(int n) {
        bool res = true;
        if(n<=0){
            return false;
        }
        while(n>1){
            if(n%4!=0){
                res=false;
            }
            n/=4;
        }
        return res;
    }
};
// if(n==1){
//             return true;
//         }
//         for(int i=0; i<sqrt(n); i++){
//             if(pow(4, i)==n){
//                 return true;
//             }
//         }