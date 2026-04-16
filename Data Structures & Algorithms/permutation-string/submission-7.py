class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        len_s1, len_s2 = len(s1), len(s2)
        l = 0
        s1char = [0] * 26
        s2char = [0] * 26 #for each letter
        if len_s1 > len_s2:
            return False

        for i in range(len_s1):
            s1char[ord(s1[i]) - ord('a')] += 1
            s2char[ord(s2[i]) - ord('a')] += 1
        
        if s1char == s2char:
            return True

        for r in range(len_s1, len_s2):

            indexR = ord(s2[r]) - ord('a')
            indexL = ord(s2[l]) - ord('a')
            s2char[indexR] += 1 #moving to the right
            s2char[indexL] -= 1 #moving from the left
            l += 1

            if s2char == s1char:
                return True
  
        return False
