class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        int size=s.size();
        if(size<=numRows || numRows==1)
            return s;
        int flag=0;
        int j=0;
        for (int i=numRows-1;i>=0;i--){
            flag=0;
            j=0;
            while(j<size){
                j+=(1+flag)*(numRows-1);
                if((j-numRows+1)>=size)
                    break;
                if(i==(numRows-1))
                    result.append(1,s[j-i]);
                else{
                    if(i){
                        if((j-i)<size)
                            result.append(1,s[j-i]);
                        if((j+i)<size)
                            result.append(1,s[j+i]);
                    }else
                        if(j<size)
                            result.append(1,s[j]);
                }
                flag=1;
            }
        }
        return result;
    }
};