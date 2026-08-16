class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        int max3=INT_MIN;
        int maxindex1;
        set<int> s(nums.begin(), nums.end());
        vector<int> numbs(s.begin(), s.end());
        int n=numbs.size();
        if(n==1){
            return numbs[0];
        }
        if(n==2){
            if(numbs[0]>numbs[1]){
                return numbs[0];
            }else{
                return numbs[1];
            }
        }
        for(int i=0; i<n; i++){
            if(numbs[i]>max1){
                max1=numbs[i];
                maxindex1=i;
            }
        }
        int maxindex2;
        for(int i=0; i<n; i++){
            if(numbs[i]>max2 && numbs[i]<=max1 && i!=maxindex1){
                max2=numbs[i];
                maxindex2=i;
            }
        }
        for(int i=0; i<n; i++){
            if(numbs[i]>max3 && numbs[i]<=max1 && numbs[i]<=max2 && i!=maxindex2 && i!=maxindex1){
                max3=numbs[i];
            }
        }
        return max3;

    }
};