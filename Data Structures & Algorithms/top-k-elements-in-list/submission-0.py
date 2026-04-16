class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hashMap = {}
        for i in range(len(nums)):
            if nums[i] in hashMap:
                hashMap[nums[i]] += 1
            else:
                hashMap[nums[i]] = 1
        
        return sorted(hashMap, key=hashMap.get, reverse=True)[:k]
