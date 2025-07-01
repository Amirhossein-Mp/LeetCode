class Solution {
public:
    string reverseWords(string s) {
        int r=s.size()-1;
        if((r+1)==0)
            return "";
        int l;
        string result;
        while(r>=0){
            while(s[r]==' '){
                r--;
                if(r<0)
                    break;
            }
            if(r<0)
                break;
            l=r;
            while(s[l]!=' '){
                l--;
                if(l<0)
                    break;
            }
            result.append(s.substr(l+1,r-l));
            r=l;
            result+=" ";
            cout<<result<<endl;
        }
        return result.substr(0,result.size()-1);
    }
};