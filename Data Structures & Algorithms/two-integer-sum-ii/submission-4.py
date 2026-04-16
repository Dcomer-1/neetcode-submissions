class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        # return the indexes whose values add to the target
        # index 1 needs to be greater than index 2
        # index 1 != index 2
        l = 0
        r = len(numbers)-1
        while l < r:
            if numbers[l] + numbers[r] == target:
                return [l+1,r+1]
            elif numbers[l] + numbers[r] < target:
                l+=1
            else:
                r-=1

                