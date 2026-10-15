class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        #remove duplicates by creating a set
        #intialize the variable that will hold the streak
        hashSet = set(nums)
        longest = 0
        res = 0
        #iterate through the hashSet
        #if num - 1 exists, then length = 1
        #meaning that the a sequence exists starts
        #from this number
        #if num + 1 exists in the hashset increment
        #length by one 
        for num in nums:
            if num - 1 not in hashSet:
                longest = 1
                while num + 1 in hashSet:
                    num += 1
                    longest += 1  
                
                res = max(res,longest)
        
        return res