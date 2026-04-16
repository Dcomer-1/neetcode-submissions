class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }

        unordered_map<char,int> charMap;
        unordered_map<char,int> windowMap;

        int l = 0, r = s1.size() - 1;
        for(int i = 0; i < s1.size(); i++){
            charMap[s1[i]]++;
        }

        for(int j = 0; j < s1.size(); j++){
            windowMap[s2[j]]++;
        }
        

        while(r <= s2.size()){
            if(windowMap == charMap){
                return true;
            }else{
                windowMap[s2[l]]--;
                if(windowMap[s2[l]] == 0){
                    windowMap.erase(s2[l]);
                }
                l++;
                r++;
                windowMap[s2[r]]++;
            }

        }
        return false;
    }
    
};
