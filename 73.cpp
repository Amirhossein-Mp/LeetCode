class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int size1=matrix.size();
            int size2=matrix[0].size();
            set<int> rows;
            set<int> columns;
            for(int i=0;i<size1;i++){
                for(int j=0;j<size2;j++)
                    if(matrix[i][j]==0){
                        rows.insert(i);
                        columns.insert(j);
                    }
            }
    
            for(auto i:rows)
                for(int j=0;j<size2;j++)
                    matrix[i][j]=0;
    
            for(auto j:columns)
                for(int i=0;i<size1;i++)
                    matrix[i][j]=0;
        }
    };