class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hashSet = set(nums)
        n = len(nums)
        count = 0
        
        if n < 1:
            return 0
        else:
            start = nums[0]

        for i in range(n):
            countNow = 0
            if nums[i] -1 not in hashSet:
                start = nums[i]
                countNow = 1
                while start + 1 in hashSet:
                        countNow += 1
                        start += 1
                count = max(countNow, count)
               
        return count