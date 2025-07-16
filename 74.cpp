class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int matrix1=matrix.size();
            int matrix2=matrix[0].size();
            int left=0;
            int right=matrix1*matrix2-1;
            int median;
            int row;
            int column;
            while(left<=right){
                median=(left+right)/2;
                row=median/matrix2;
                column=median%matrix2;
                if(matrix[row][column]==target)
                    return true;
                if(matrix[row][column]<target){
                    left=median+1;
                }else
                    right=median-1;
            }
            return false;
        }
    };