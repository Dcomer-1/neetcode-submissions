class Solution {
public:

    string encode(vector<string>& strs) {
        //append all strs in the list together and seperaate them 
        //by length a special character e.g.("#")
        string encodedString = "";
        for(int i = 0; i < strs.size(); i++){
            encodedString += (to_string(strs[i].length()) + "#");
            encodedString += (strs[i]);
        }
        //return the full string
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> decodedStrings;
        int i = 0;
        if(s.size() <= 0){
            return {};
        }
        while(i < s.size()){
            int position = s.find('#',i);
            int stringlength = stoi(s.substr(i,position - i));
            i = position + 1;
            decodedStrings.push_back(s.substr(i,stringlength));
            i += stringlength;
        }
        //seperate the words by incrementing pointers 
        //check for special character or empty space
        //add words to the list 
        //return list
        return decodedStrings;
    }
};
