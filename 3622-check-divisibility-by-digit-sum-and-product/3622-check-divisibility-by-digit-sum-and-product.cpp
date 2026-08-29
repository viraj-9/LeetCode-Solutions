class Solution {
public:
    bool checkDivisibility(int n) {
        int prod = 1;
        int sum = 0;
        int num=n;
        bool result=false;
        while(n>0){
            int rem = n%10;
            prod*=rem;
            sum+=rem;
            n/=10;
        }
        if(num%(sum+prod)==0) result= true;
        return result;
    }
};