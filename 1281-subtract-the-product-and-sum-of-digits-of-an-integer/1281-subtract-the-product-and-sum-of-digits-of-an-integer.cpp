class Solution {
public:
    int subtractProductAndSum(int n) {
        int number=n;
        int sum=0;
        int product=1;
        while(number>0){
            int rem=number%10;
            product*=rem;
            sum+=rem;
            number/=10;
        }
        return product-sum;
    }
};