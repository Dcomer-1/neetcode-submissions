class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        l, res = 0,0
        hashMap = {}
        for r in range(len(s)):      
            hashMap[s[r]] = hashMap.get(s[r], 0) + 1
            if (r-l+1) - max(hashMap.values()) > k:
                if hashMap[s[l]] == 0:
                    del hashMap[s[l]]
                else:
                    hashMap[s[l]] -= 1
                l += 1
            res = max(res,(r-l+1))
        return res
