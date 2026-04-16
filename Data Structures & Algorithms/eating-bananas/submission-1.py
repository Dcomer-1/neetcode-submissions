class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l,r = 1,max(piles)
        minK = r

        def Time(k:int, piles: list):
            hours = 0
            for i in range(len(piles)):
                if piles[i] % k == 0:
                    hours += ((piles[i]+k)//k) - 1
                else:
                    hours += ((piles[i]+k)//k)
            return hours
        
        def BS(l:int , r:int, minK:int):
            if l > r:
                return minK
            mid = l + ((r-l)//2)
            k = mid
            if Time(k,piles) > h:
                return BS(mid+1,r,minK)
            elif Time(k,piles) <= h:
                minK = min(minK, k)
                return BS(l,mid-1,minK)
        
        return BS(l,r,minK)
        