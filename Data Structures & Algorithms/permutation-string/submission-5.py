class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        len_s1, len_s2 = len(s1), len(s2)
        s1char = [0] * 26 #for each letter
        for char in s1:
            s1char[ord(char) - ord('a')] += 1

        l,r = 0,0 # left and right pointer
        arr = s1char.copy()
        count = len_s1

        while r < len_s2:
            index = (ord(s2[r]) - ord('a'))
            
            if arr[index] > 0: # meaning that it was in s1
                arr[index] -= 1
                count -= 1
                r += 1
                if count == 0:
                    return True    
            else:
                l += 1
                r = l
                count = len_s1
                arr = s1char.copy() 
        
        return False
