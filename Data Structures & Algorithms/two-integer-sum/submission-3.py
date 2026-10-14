class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = dict()

        for i in range(len(nums)):
            comp = target - nums[i]
            if comp in hashMap:
                return [hashMap.get(comp), i]
            else:
                hashMap[nums[i]] = i