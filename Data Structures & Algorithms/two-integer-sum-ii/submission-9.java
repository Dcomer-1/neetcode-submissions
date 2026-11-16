class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int l = 0, r = numbers.length -1;
        //if l + r is greater than the target then we want to decrement
        //if its less then we increment the left pointer
        //but first we check if we found the target and if so we return the indicies + 1
        while(l < r){
            if(numbers[l] + numbers[r] == target){
                return new int[] {l + 1, r + 1};
            }else if (numbers[l] + numbers[r] > target){
                r--;
            }else{
                l++;
            }
        }
        return new int[] {-1,-1};
    }
}
