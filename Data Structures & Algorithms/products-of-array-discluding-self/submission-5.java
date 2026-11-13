class Solution {
    public int[] productExceptSelf(int[] nums) {
        int zeroCount = 0;
        int[] res = new int[nums.length];
        int totalProd = 1;
        
        for(int num: nums){
            if(num == 0 && zeroCount <= 1){
                zeroCount += 1;
            }else{
                totalProd *= num;
            }


        }
        
        if(zeroCount > 1){
            return res;
        }

        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 0){
                res[i] = totalProd;
            }else{
                if(zeroCount > 0){
                    res[i] = 0;
                }else{
                    res[i] = totalProd / nums[i];
                }
            }
        }


        return res;
    }
}  
