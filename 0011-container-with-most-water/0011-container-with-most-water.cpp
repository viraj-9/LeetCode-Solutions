class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int max=0;
        int right=height.size()-1;
        int width;
        int water;
        while(left<right){
            width=right-left;
            if(height[left]<height[right]){
                water=height[left];
            }else{
                water=height[right];
            }
            int capacity = water*width;
            if(capacity>max){
                max=capacity;
            }
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return max;
    }
};