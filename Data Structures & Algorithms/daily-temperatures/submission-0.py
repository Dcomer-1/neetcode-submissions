class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        self.stack = []
        n = len(temperatures)
        res = [0] * n

        for i in range(n):
            if self.stack:
                print(self.stack)
                while self.stack and temperatures[self.stack[-1]] < temperatures[i]:
                    res[self.stack[-1]] = (i - self.stack[-1])
                    self.stack.pop()
                self.stack.append(i)
            else:
                self.stack.append(i)
        
        return res