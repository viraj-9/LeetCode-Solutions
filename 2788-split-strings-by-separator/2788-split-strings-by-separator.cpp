class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n = words.size();
        vector<string> result;

        for(int i = 0; i<n; i++){
            string temp = "";
            string s = words[i];
            cout<<s<<" ";
            for(int j = 0; j<s.length(); j++){
                
                if(s[j] == separator){
                    if(temp != ""){
                        result.push_back(temp); 
                        temp = "";
                    }
                }
                else temp += s[j];
            }
            if(temp != "") result.push_back(temp);
            
        }
        return result;
    }

};