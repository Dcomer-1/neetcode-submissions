class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        #create res array the length of temperatures
        res = [0] * len(temperatures)
        stack = []
        #Create stack to store indicies and temp
        #track index and temp at indicies
        for i, j in enumerate(temperatures):
            while stack and j > temperatures[stack[-1]]:
                dayIndex = stack.pop()
                res[dayIndex] = i - dayIndex
            stack.append(i)
        return res