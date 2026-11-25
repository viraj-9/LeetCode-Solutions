class Solution {
public:
    int maxProduct(int n) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        int temp1 = n;

        while(temp1 > 0){
            int rem = temp1%10;
            if(rem > max1) {
                max2 = max1;
                max1 = rem;
            }else{
                max2 = max(max2, rem);
            }
            temp1 /= 10;
        }
        long long prod = 1LL*max1*max2;
        return prod;
    }
};