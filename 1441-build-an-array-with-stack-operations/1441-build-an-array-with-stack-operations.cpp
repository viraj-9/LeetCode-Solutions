class Solution {
public:
    // bool check(vector<int>& target, int num){
    //     int size = target.size();
    //     int ans = false;
    //     for(int i = size-1; i>=0; i--){
    //         if(target[i] == num){
    //             return true;
    //         }else{
    //             return false;
    //         }
    //     }
    //     return ans;
    // }
    vector<string> buildArray(vector<int>& target, int n) {
        int size = target.size();
        int maxi = target[size - 1];
        vector<string> result;
        stack<int> st;
        int num = 1;
        int i = 0;

        while(num <= maxi){
            st.push(num);
            result.push_back("Push");
            
            if(num != target[i]){
                st.pop();
                result.push_back("Pop");
            }else{
                i++;
            }

            if(i == size) break;
            num++;
        }
        return result;

    }
};