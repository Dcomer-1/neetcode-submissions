class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        Set<List<Integer>> res = new HashSet<>();
        //iterate through the array one time 
        //create a while loop that l = i +1 and r = nums.length - 1
        for(int i = 0; i < nums.length; i++){
            int l = i + 1, r = nums.length - 1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    res.add(Arrays.asList(nums[i],nums[l],nums[r]));
                    l++;
                    r--;
                }else if(nums[i] + nums[l] + nums[r] > 0){
                    r--;
                }else{
                    l++;
                }
            }
        }
        return new ArrayList<>(res);
    }
}
