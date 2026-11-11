class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> index = new HashMap<>();


        for(int j = 0; j < nums.length; j++){
            int otherNum = target - nums[j];
            if(index.containsKey(otherNum) && j != index.get(otherNum)){
                if(j > index.get(otherNum)){
                    return new int[] {index.get(otherNum),j};
                }else{
                    return new int[] {j,index.get(otherNum)};
                }
            }else{
                index.put(nums[j],j); 
            }
        }

        return new int[] {-1,-1};
    }
}
