class Solution {
    public:
        bool wordBreak(string s, vector<string>& wordDict) {
            int size=wordDict.size();
            int sSize=s.size();
            vector<bool> letters(sSize+1,false);
            int start=0;
            int idx;
            letters[0]=true;
            for(int i=1;i<=sSize;i++){
                for(int j=0;j<size;j++){
                    idx=i-wordDict[j].size();
                    if(idx>=0 && letters[idx] && s.substr(idx,wordDict[j].size())==wordDict[j]){
                        letters[i]=true;
                        break;
                    }
                }
            }
            return letters[sSize];
        }
    };