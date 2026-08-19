class Solution {
public:
    // int recurse(int num){
    //     int sum=0;
    //     if(num==0){
    //         return num;
    //     } 
        
    // }
    int calculate(int num){
        int sum=0;
        while(num>0){
            int rem=num%10;
            sum= sum+rem;
            num/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        // int result = recurse(num);
        int sum=num;
        while(sum>9){
            sum=calculate(sum);
        }
        return sum;
    }
};