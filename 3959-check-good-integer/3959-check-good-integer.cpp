class Solution {
public:
    bool checkGoodInteger(int n) {
        bool result = false;
        int digitsum = 0;
        int squaresum = 0;
        int product;
        int num=n;
        while(num>0){
            int rem = num%10;
            digitsum += rem;
            product = rem*rem;
            squaresum += product;
            num/=10;
        }
        if((squaresum-digitsum)>=50){
            result = true;
        }
        return result;
    }
};