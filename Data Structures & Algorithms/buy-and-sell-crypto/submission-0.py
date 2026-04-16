class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, r = 0,0
        maxP = 0
        for i in range(len(prices)-1):
            r += 1
            if prices[l] > prices[r]:
                l = r
            else:
                maxP = max(maxP, prices[r] - prices[l])

        return maxP

