class Solution {
    public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int>result;
        int size=matrix.size()*matrix[0].size();
        return recurse(matrix,result,0,size,3,0);
        
    }
    vector<int> recurse(vector<vector<int>>& matrix,vector<int>&result,int seen,int size,int count,int offset){
        if (seen==size)
            return result;
        if(count==3){
            result.push_back(matrix[offset][offset]);
            seen++;
            // cout<<matrix[offset][offset]<<", ";
            for(int j=offset+1;j<matrix[0].size()-offset;j++){
                result.push_back(matrix[offset][j]);
                // cout<<matrix[offset][j]<<", ";
                seen++;
            }
            return recurse(matrix,result,seen,size,2,offset);
        }else if(count==2){
            for(int i=offset+1;i<matrix.size()-offset;i++){
                result.push_back(matrix[i][matrix[0].size()-offset-1]);
                // cout<<matrix[i][matrix.size()-offset-1]<<", ";
                seen++;
            }
            return recurse(matrix,result,seen,size,1,offset);
        }else if(count==1){
            for(int j=matrix[0].size()-2-offset;j>=offset;j--){
                result.push_back(matrix[matrix.size()-1-offset][j]);
                // cout<<matrix[matrix.size()-1-offset][j]<<", ";
                seen++;
            }
            return recurse(matrix,result,seen,size,0,offset);
        }else{
            for(int i=matrix.size()-2-offset;i>offset;i--){
                result.push_back(matrix[i][offset]);
                // cout<<matrix[i][offset]<<", ";
                seen++;
            }
            return recurse(matrix,result,seen,size,3,++offset);
        }
    }
    };