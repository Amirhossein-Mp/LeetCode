class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size();
        int l=0;
        int r=size-1;
        int first=0;
        bool flag=false;
        while(l<=r){
            if(s[r]==' ')
                r--;
            else if(s[l]!=' '){
                if(flag){
                    first=l;
                    flag=false;
                }
                l++;
            }else{
                l++;
                flag=true;
            }
        }
        return r-first+1;
    }
};