class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, numOfZeroes = 0;
                
        for(int num : nums){
            if(num != 0){
                prod *= num;
            }else{
                numOfZeroes++;
            }
        }

        if(numOfZeroes > 1){
            return vector<int>(nums.size(),0);
        }

        vector<int>ans(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(numOfZeroes > 0){
                ans[i] = (nums[i] == 0) ? prod : 0;
            }else{
                ans[i] = prod / nums[i];
            }
        }
        return ans;
    }
};
