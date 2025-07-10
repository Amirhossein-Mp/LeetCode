class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            unordered_set<char>rows[9];
            unordered_set<char>columns[9];
            unordered_set<char>boxes[9];
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    int index=3*(i/3)+j/3;
                    if(board[i][j]=='.')
                        continue;
                    if(rows[i].count(board[i][j])||boxes[index].count(board[i][j])||columns[j].count(board[i][j]))
                        return false;
                    rows[i].insert(board[i][j]);
                    columns[j].insert(board[i][j]);
                    boxes[index].insert(board[i][j]);
                }
            }
            return true;
        }
    };