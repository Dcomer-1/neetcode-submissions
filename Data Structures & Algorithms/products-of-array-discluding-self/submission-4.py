class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # intialize prod and xero count
        # if the count of zero is over 1 then the entire 
        # array will be zero

        #initialize the result array 
        #if the zero count is 1, and the current index is 
        # == 0, then the product at the postion is the prod of the entire array 
        # otherwise the prod of said position is the prod of the entire array divided by itself

        arrProd = 1
        zeroCount = 0
        for num in nums:
            if num:
                arrProd *= num
            else:
                zeroCount += 1
            if zeroCount > 1:
                return [0] * len(nums)
        
        res = [0] * len(nums)

        for i, c in enumerate(nums):
            if zeroCount: 
                if c:
                    res[i] = 0 
                else:
                    res[i] = arrProd
            else:
                res[i] = arrProd // c
        
        return res
        