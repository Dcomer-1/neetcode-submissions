class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>seen;
        for(int num : nums){
            if(seen.contains(num)){
                return num;
            }else{
                seen.insert(num);
            }
        }
    }
};
