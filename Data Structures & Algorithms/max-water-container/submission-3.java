class Solution {
    public int maxArea(int[] heights) {
        // track the max, l and r pointer
        // calc the max possible area by taking the min between the heights
        // and the width are the indicies - one another
        // if the left height is less than the right move the l pointer
        // else decrement the right pointer
        int maxArea = 0, l = 0, r = heights.length - 1;
        while(l < r){
            int height = 0, width = 0;
            height = Math.min(heights[l],heights[r]);
            width = r - l;
            maxArea = Math.max(maxArea, (height * width));
            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxArea;
    }
}
