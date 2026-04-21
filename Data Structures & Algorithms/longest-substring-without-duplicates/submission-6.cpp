class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int i = 0;
        int r = 0;
        int maxlength = 0;
        
        if(s.size() <= 0){
            return 0;
        }

        while(r < s.size()){
            while(seen.contains(s[r])){
                seen.erase(s[i]);
                i++;
            }
            seen.insert(s[r]);
            maxlength = max(maxlength, (r-i) + 1);
            r++;
        }
        return maxlength;
    }
};
