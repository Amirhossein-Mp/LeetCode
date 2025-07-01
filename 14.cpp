class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        char curr;
        bool flag=true;
        int index=0;
        string result;
        for(int i=0;(i<strs[0].size()) & flag;i++){
            curr=strs[0][i];
            for(int j=1;j<size;j++){
                if(i<strs[j].size()){
                    if(strs[j][i]!=curr){
                        flag=false;
                        break;
                    }
                }else
                    flag=false;
            }if(flag)
                result.append(1,curr);
        }
        return result;
    }
};