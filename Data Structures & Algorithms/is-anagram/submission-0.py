class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hashMap1={}
        hashMap2={}

        
        
        for i in range(len(s)):
            if s[i] in hashMap1:
                hashMap1[s[i]] += 1
            else:
              hashMap1[s[i]] =1 
        
        for j in range(len(t)):
            if t[j] in hashMap2:
                hashMap2[t[j]] += 1
            else:
                hashMap2[t[j]] = 1
        
        if hashMap1 == hashMap2:
            return True
        else:
            return False