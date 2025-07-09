class Solution {
    public:
        vector<int> findSubstring(string s, vector<string>& words) {
            vector <int> result;
            unordered_map<string,int> original;
            for(string x: words){
                if(original.find(x)!=original.end())
                    original[x]++;
                else
                    original.insert({x,1});
            }
            int sSize=s.size();
            int wordSize=words[0].size();
            int wordsSize=words.size();
            for(int i=0;i<wordSize;i++){
                unordered_map<string,int> temp;
                int start=i;
                int count=0;
                for(int j=i;j+wordSize<=sSize;j+=wordSize){
                    string p=s.substr(j,wordSize);
                    cout<<"temp"<<endl;
                    
                    if(original.find(p)!=original.end()){
                        if(temp.find(p)!=temp.end())
                            temp[p]=temp[p]<0?1:temp[p]+1;
                        else
                            temp.insert({p,1});
                        for(auto x: temp )
                        cout<<"string: "<< x.first<<" count: "<<x.second<<endl;
                        count++;
                        while(temp[p]>original[p]){
                            string g=s.substr(start,wordSize);
                            start+=wordSize;
                            count--;
                            temp[g]--;
                        }
                        if(count==wordsSize)
                            result.push_back(start);
    
                    }else{
                        count=0;
                        start=j+wordSize;
                        temp.clear();
                    }
                }
            }
            return result;
        }
    };