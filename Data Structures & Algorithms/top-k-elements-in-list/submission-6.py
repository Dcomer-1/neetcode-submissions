class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hashMap = dict()

        for num in nums:
            hashMap[num] = hashMap.get(num, 0) + 1
        
        arr = []
        for num, cnt in hashMap.items():
            arr.append([cnt,num])
        arr.sort()

        res = []
        while len(res) < k:
            res.append(arr.pop()[1])
        
        return res