class Solution {
public:
    bool isSubsequence(string s, string t) {
        int Tsize=t.size();    
        int Ssize=s.size();
        int last=0;
        int i=0;
        string result;
        for(i;i<Ssize;i++){
            while(last<Tsize){
                if(s[i]==t[last]){
                    result.append(1,s[i]);
                    last++;
                    break;
                }
                last++;
            }
        }
        if(result.size()==s.size())
            return true;
        return false;
    }
};