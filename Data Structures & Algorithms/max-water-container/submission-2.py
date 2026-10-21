class Solution:
    def maxArea(self, heights: List[int]) -> int:
        # iterate through the array once
        # set the left pointer at the beginning array 
        # r is the end and while l < r track the max units of water that each combination can store
        maxWater = 0
        l = 0
        r = len(heights) - 1
        while l < r:
            area = min(heights[l],heights[r]) * (r-l)
            maxWater = max(maxWater, area)
            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1
        return maxWater
