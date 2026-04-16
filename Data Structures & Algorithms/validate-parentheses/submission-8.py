class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        ref = {")" : "(", "]" : "[", "}" : "{"}
        for i in s:
            if i in ref and stack:
                if stack[-1] == ref[i]:
                    r = stack.pop()
                else:
                    return False
            else:
                stack.append(i)

        return True if not stack else False