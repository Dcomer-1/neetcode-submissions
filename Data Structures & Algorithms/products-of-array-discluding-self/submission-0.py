class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]: 
        newList = [1] * len(nums)
        prefix = 1
        for i in range( len(nums)):
            newList[i] = prefix
            prefix = prefix * nums[i]
            
        suffix = 1
        for i in range(len(nums)-1,-1,-1):
            newList[i] = suffix * newList[i]
            suffix *= nums[i]
        
        return newList