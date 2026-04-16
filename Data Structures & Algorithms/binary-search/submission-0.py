class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l,r = 0, len(nums) - 1

        def BS(l:int, r:int):
            if l > r:
                return -1
            mid = l + ((r-l)//2)
            if nums[mid] == target:
                return mid 
            if nums[mid] < target:
                return BS(mid+1, r)
            elif nums[mid] > target:
                return BS(l, mid-1)

        return BS(l,r) 