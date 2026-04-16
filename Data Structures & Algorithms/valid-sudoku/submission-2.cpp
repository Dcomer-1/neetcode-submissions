class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //check all rows
        for(int rows = 0; rows < board.size(); rows++){
            set<char>seen;
            for(int cols = 0; cols < board.size(); cols++){
                if(board[rows][cols] == '.'){
                    continue;
                }
                if(seen.contains(board[rows][cols])){
                    return false;
                }
                seen.insert(board[rows][cols]);
            }
        }

        //check all cols
        for(int cols = 0; cols < board.size(); cols++){
            set<char>seen;
            for(int rows = 0; rows < board.size(); rows++){
                if(board[rows][cols] == '.'){
                    continue;
                }
                if(seen.contains(board[rows][cols])){
                    return false;
                }
                seen.insert(board[rows][cols]);
            }
        }

        //check all 3x3 squares
        for(int section = 0; section < board.size(); section++){
            set<char>seen;
            for(int i = 0; i < 3; i++){
                for(int j =0; j < 3; j++){
                    int rows = (section/3)*3 + i;
                    int cols = (section%3)*3 + j;
                    if(board[rows][cols] == '.'){
                        continue;
                    }
                    if(seen.contains(board[rows][cols])){
                        return false;
                    }
                    seen.insert(board[rows][cols]);
                }
            }        
        }
    

        return true;
    }
};
