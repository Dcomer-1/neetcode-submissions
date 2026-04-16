class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = [char for char in s if char.isalnum()]

        n = len(s)
        ans = True
        for i in range(n//2):
            if s[i].lower() == s[n - i -1].lower():
                ans = True
            else:
                ans = False
        return ans