class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums = sorted(nums)

        for i in range(len(nums)):
            l = i + 1 
            r = len(nums) - 1
            a = nums[i]
            if a > 0: 
                return res
            if i > 0 and nums[i - 1] == a:
                continue
            while l < r:
                if(a + nums[l] + nums[r] == 0):
                    res.append([a, nums[l], nums[r]])
                    l = l + 1
                    r = r - 1
                    while(nums[l - 1] == nums[l] and l < r):
                        l = l + 1
                    while(nums[r + 1]== nums[r] and l < r):
                        r = r - 1
                elif(a + nums[l] + nums[r] > 0):
                    r = r - 1
                else:
                    l = l + 1

        return res
                

        