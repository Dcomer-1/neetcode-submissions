class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap={}
        for i in range(len(nums)):
            newTarget = target - nums[i]
            if newTarget not in hashMap:
                hashMap[nums[i]] = i
            else:
                return [hashMap[newTarget], i]
        