class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        bool result=false;
        
        if(n<0){
            return false;
        }
        long long x=sqrt(n)+1;
        while(i<=x){
            if(n==(pow(2, i))){
                result= true;
            }
            i++;
        }
        return result;
    }
};