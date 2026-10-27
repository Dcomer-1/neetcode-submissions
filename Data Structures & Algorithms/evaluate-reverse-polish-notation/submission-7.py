class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        # iterate through array and store nums in one array 
        for num in tokens:
            match num:
                case "+":
                    num2 = stack.pop()
                    num1 = stack.pop()
                    num3 = int(num1) + int(num2) 
                    stack.append(num3)
                case "-":
                    num2 = stack.pop()
                    num1 = stack.pop()
                    num3 = int(num1) - int(num2)
                    stack.append(num3)
                case "*":
                    num2 = stack.pop()
                    num1 = stack.pop()
                    num3 = int(num1) * int(num2)
                    stack.append(num3)  
                case "/":
                    num2 = stack.pop()
                    num1 = stack.pop()
                    num3 = int(num1/ num2)
                    stack.append(num3)
                case _:
                    stack.append(int(num))
        return stack.pop()
        # when array gets to an operation, pop two nums from the stack

        #perform the operation and store the result at the top of the stack

        # return the result after traversing the array