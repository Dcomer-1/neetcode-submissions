class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        exists = False

        def BS(l:int , r:int, row:list):
            if l > r:
                return False
            mid = l + ((r-l)//2)

            if row[mid] == target:
                return True
            elif row[mid] < target:
                return BS(mid+1, r, row)
            elif row[mid] > target:
                return BS(l, mid-1, row)


        for row in matrix:

            if exists == True:
                break 

            l,r = 0, len(row)-1
            exists = BS(l,r,row)

        return exists
