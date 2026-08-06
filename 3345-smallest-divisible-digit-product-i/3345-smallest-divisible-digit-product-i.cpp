class Solution {
public:

    int extract(int n){
        int num = n;
        int product = 1;
        vector<int> v;
        while(num>0){
            int rem = num%10;
            product = product * rem;
            num/=10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        int product = 1;
        int num = n;
        if(t>n){
            return t;
        }
        product = extract(num);
        while(product%t!=0){
            if(product%t == 0){
                return num;
            }
            num+=1;
            product = 1;
            product = extract(num);
                        
        }
        return num;
    }
};