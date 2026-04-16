class Solution:
    def maxArea(self, heights: List[int]) -> int:
        maxA = 0
        length = len(heights)
        l,r = 0, length-1
        while l<r:
            if heights[l] < heights[r] or heights[l] == heights[r]:
                maxT = heights[l] * (r-l)
                l += 1
                if maxT > maxA:
                    maxA = maxT
            elif heights[l] > heights[r]:
                maxT = heights[r] * (r-l)
                r-= 1
                if maxT > maxA:
                    maxA = maxT
        return maxA    