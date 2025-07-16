class Solution {
    public:
        int check(vector<vector<int>>& board,int i,int j){
            return (board[i][j]==1|board[i][j]==2)?1:0;
        }
        void gameOfLife(vector<vector<int>>& board) {
            int size1=board.size();
            int size2=board[0].size();
            for(int i=0;i<size1;i++){
                for(int j=0;j<size2;j++){
                    int count=0;
                    if((i-1)>=0)
                        count+=check(board,i-1,j);
                    if((i+1)<size1)
                        count+=check(board,i+1,j);
                    if((j-1)>=0){
                        count+=check(board,i,j-1);
                        if((i-1)>=0){
                            count+=check(board,i-1,j-1);
                        }if((i+1)<size1){
                            count+=check(board,i+1,j-1);
                        }
                    }if((j+1)<size2){
                        count+=check(board,i,j+1);
                        if((i-1)>=0){
                            count+=check(board,i-1,j+1);
                        }if((i+1)<size1){
                            count+=check(board,i+1,j+1);
                        }
                    }
                    if(board[i][j]){
                        if(count>3 | count<2)
                            board[i][j]=2;
                        else
                            board[i][j]=1;
                    }else if(count==3)
                        board[i][j]=-1;
                }
            }
            for(int i=0;i<size1;i++){
                for(int j=0;j<size2;j++)
                    board[i][j]=board[i][j]&1?1:0;
            }
    
        }
    };