class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        stack = []

        def BT(lp:int , rp: int):
            
            if len(stack) == n*2:
                res.append(''.join(stack))            
            if lp < n:
                stack.append('(')
                BT(lp+1, rp)
                stack.pop()
            if rp < lp:
                stack.append(')')
                BT(lp, rp+1)
                stack.pop()

        BT(0,0)
        return res
