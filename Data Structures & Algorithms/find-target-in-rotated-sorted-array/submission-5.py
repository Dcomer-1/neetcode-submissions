class Solution:
    def search(self, nums: List[int], target: int) -> int:   
        l,r = 0,len(nums) -1

        def BS(l,r):
            if l > r:
                return -1
            mid = l + ((r-l)//2)
            print(mid)

            if nums[mid] == target:
                return mid
            
            if nums[l] <= nums[mid]:
                if nums[l] <= target < nums[mid]: 
                    return BS(l, mid-1)
                else:
                    return BS(mid+1, r)
            else:
                if nums[r] >= target > nums[mid]: 
                    return BS(mid+1, r)
                else:
                    return BS(l , mid-1)

        return BS(l,r)