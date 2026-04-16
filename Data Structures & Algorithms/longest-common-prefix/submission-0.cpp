class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string solution = "";
        char ltr = strs[0][0];

        if(strs.size() <= 0){
            return "";
        }

        for(int i = 0; i < strs[0].size(); i++){
            ltr = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] != ltr){
                    return solution;
                }
            }
            solution += ltr;
        }
        return solution;
    }
};