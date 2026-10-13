class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hashMap1 = dict()
        hashMap2 = dict()

        for char in s:
            if char not in hashMap1:
                hashMap1[char] = 1
            else:
                hashMap1[char] = hashMap1.get(char) + 1
        
        for char in t:
            if char not in hashMap2:
                hashMap2[char] = 1
            else:
                hashMap2[char] = hashMap2.get(char) + 1
        
        return hashMap1 == hashMap2