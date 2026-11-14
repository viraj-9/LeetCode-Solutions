class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int b1 = abs(ax2-ax1);
        int l1 = abs(ay2-ay1);
        long long area1 = b1*l1;

        int b2 = abs(bx2-bx1);
        int l2 = abs(by2-by1);
        long long area2 = b2*l2;

        int overlapleftx = max(ax1, bx1);
        int overlaplefty = max(ay1, by1);

        int overlaprightx = min(ax2, bx2);
        int overlaprighty = min(ay2, by2);

        int b3 = overlaprightx - overlapleftx;
        int l3 = overlaprighty - overlaplefty;

        if(b3 <= 0 || l3 <= 0){
            return area1 + area2;
        }
        
        long long overlap = 1LL * b3 * l3;
        return (area1+area2) - (overlap);

    }
};