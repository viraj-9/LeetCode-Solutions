class Solution {
public:
    bool canAliceWin(int n) {
        bool check = false;
        int temp = n;
        if(temp < 10) return false;

        int start = 10;
        int count = 0;
        while(temp > 0){
            if(temp < start){
                break;
            }
            count++;
            temp -= start;
            start--;
        }
        if(count%2 == 0) return false;
        else return true;
    }
};