class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // [-2,0,0,2,2]
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] > 0){break;}
            if(i > 0 && nums[i] == nums[i-1] && !ans.empty()){continue;}
            int l = i+1, r = nums.size()-1;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum > 0){
                    r--;
                }else if(sum < 0){
                    l++;
                }else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    // skipping past duplicate vals
                    while(l < r && nums[l] == nums[l-1]){
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};
