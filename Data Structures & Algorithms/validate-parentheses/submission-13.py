class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracketDict = {"}" : "{", "]" : "[", ")" : "("}

        for c in s:
            if c in bracketDict:
                if stack and stack[-1] == bracketDict[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)

        return True if not stack else False