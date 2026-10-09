class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hashMap = {}
        hashMap2 = {}

        for char in s:
            if char not in hashMap:
                hashMap[char] = 1
            else:
                hashMap[char] = hashMap.get(char) + 1
        
        for char in t:
            if char not in hashMap2:
                hashMap2[char] = 1
            else:
                hashMap2[char] = hashMap2.get(char) + 1
        
        return hashMap == hashMap2