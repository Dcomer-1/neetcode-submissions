class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
       # check that there are no repeats in each col
        for i in range(len(board)):
            seen = set()
            for j in range(len(board)):
                if board[i][j] in seen and  board[i][j] != ".":
                    return False
                else:
                    seen.add(board[i][j])
       # check that there are no repeats in each row
        for i in range(len(board)):
            seen = set()
            for j in range(len(board)):
                if board[j][i] in seen and  board[j][i] != ".":
                    return False
                else:
                    seen.add(board[j][i])
        
       # check that there are no repeats in each 3 x 3 sub-box 

        for square in range(len(board)):
            seen = set()
            for i in range(3):
                for j in range(3):
                    row = (square//3) * 3 + i
                    col = (square % 3) * 3 + j
                    if(board[row][col]) in seen and board[row][col] != ".":
                        return False
                    else:
                        seen.add(board[row][col])

        return True
