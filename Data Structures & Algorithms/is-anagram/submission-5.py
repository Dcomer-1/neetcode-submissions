class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hashMap = dict()

        for c in s:
            hashMap[c] = hashMap.get(c, 0) + 1

        for c in t:
            hashMap[c] = hashMap.get(c, 0) - 1


        return all(v==0 for v in hashMap.values())
                