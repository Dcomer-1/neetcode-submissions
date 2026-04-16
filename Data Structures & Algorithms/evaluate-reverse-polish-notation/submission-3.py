class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        self.stack = []
        length = len(tokens)
        operators = {'+' : lambda num1,num2 : num1 + num2,
        '-' : lambda num1,num2 : num1 - num2,
        '*' : lambda num1,num2 : num1 * num2,
        '/' : lambda num1,num2 : int(num1 / num2),}

        for i in range(length):
            if tokens[i] in operators and self.stack:
                func = operators[tokens[i]]
                num2 = self.stack.pop()
                num1 = self.stack.pop()
                res = func(int(num1),int(num2))
                self.stack.append(res)
            elif tokens[i] not in operators:
                self.stack.append(int(tokens[i]))

        return self.stack.pop()
        
