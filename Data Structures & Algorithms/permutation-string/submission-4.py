class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        l = 0
        seen = {}
        for char in s1:
            seen[char] = seen.get(char,0) + 1
        print(seen)
        for r in range((len(s1)-1), len(s2)):
            substring = s2[l:r+1]
            seen2 = {}
            for char in substring:
                seen2[char] = seen2.get(char,0) + 1
            print(seen2)
            if seen2 == seen:
                return True
            l+=1
        return False