class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> numLog = new HashSet<>();
        for(Integer i = 0; i < nums.length; i++){
            boolean exists = numLog.add(nums[i]);
            if (!exists){
                return true;
            }
            else{
                numLog.add(nums[i]);
            }
        }
        return false;
    }
}