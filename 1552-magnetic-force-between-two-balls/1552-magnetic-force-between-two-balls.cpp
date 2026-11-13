class Solution {
public:

    bool isPossible(int mid, vector<int>& position, int n, int m){
        int count = 1;
        int lastposition = position[0];

        for(int i = 1; i<n; i++){
            if(position[i] - lastposition  >= mid){
                count++;
                lastposition = position[i];
            }
        }
        if (m <= count) return true;
        else return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int mini = 0;

        int left = 1;
        int right = position[n-1] - position[0];

        while(left <= right){
            int mid = (left + right) / 2;
            if(isPossible(mid, position, n, m)){
                mini = max(mid, mini);
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return mini;
    }
};