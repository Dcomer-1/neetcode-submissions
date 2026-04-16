class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0, maxf = 0, l = 0;
        unordered_map<char,int> charMap;

        for(int r = 0; r < s.size(); r++){
            charMap[s[r]]++;
            maxf = max(maxf,charMap[s[r]]);

            while((r - l + 1) - maxf > k){
                charMap[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};
