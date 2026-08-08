class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();

        for(int i=0; i<n; i++){
            int max=heights[i];
            int index=i;
            for(int j=i+1; j<n; j++){
                if(heights[j]>max){
                    max=heights[j];
                    index=j;
                }
            }
            swap(heights[i], heights[index]);
            swap(names[i], names[index]);
        }
        return names;
    }
};