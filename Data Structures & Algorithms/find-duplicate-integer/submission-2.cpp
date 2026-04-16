class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>seen;
        for(int i = 0; i < nums.size(); i++ ){
            if(seen.contains(nums[i])){
                return nums[i];
            }
            seen.insert(nums[i]);
        }
        return -1;
    }
};
