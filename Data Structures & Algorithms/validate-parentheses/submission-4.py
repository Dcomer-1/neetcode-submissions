class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        n = len(s)
        for i in range(n):
            if len(stack) == 0 and (s[i] == ')' or s[i] == '}' or s[i] == ']'):
                    return False

            elif(s[i] == '(' or s[i] == '{' or s[i] == '['):
                stack.append(s[i])
            elif (s[i] == ']' or s[i] == '}' or s[i] == ')'):
                r = stack.pop()
                print(s[i])
                print(r)
                if s[i] == "]" and r == "[":
                    continue
                elif s[i] == "}" and r == "{":
                    continue
                elif s[i] == ")" and r == "(":
                    continue
                else:
                    return False
        return len(stack) == 0