class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        self.stack = []
        length = len(tokens)

        for i in range(length):
            if tokens[i] == "+":
                self.stack.append(self.stack.pop() + self.stack.pop() )
            elif tokens[i] == "-":
                nums2 = self.stack.pop()
                nums1 = self.stack.pop()
                self.stack.append(nums1 - nums2 )
            elif tokens[i] == "*":
                self.stack.append(self.stack.pop() * self.stack.pop() )
            elif tokens[i] == "/":
                nums2 = self.stack.pop()
                nums1 = self.stack.pop()
                self.stack.append( int(nums1 / nums2))
            else:
                self.stack.append(int(tokens[i]))

        return self.stack.pop()
        
