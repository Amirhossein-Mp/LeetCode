class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<char,int> map;
            int maxi=0;
            string curr;
            int right=0;
            int size=s.size();
            int left=0;
            while(right<size){
                auto result=map.find(s[right]);
                if(result==map.end()){
                    curr.append(1,s[right]);
                    map.insert({s[right],right});
                    maxi=max(maxi,curr.size());
                    // cout<<"append:"<<curr<<endl;
                }else{
                    for(int i= 0;i<=(result->second-left);i++)
                        map.erase(curr[i]);
                    curr.erase(0,result->second+1-left);
                    left=result->second+1;
                    curr.append(1,s[right]);
                    map.insert({s[right],right});
                    // cout<<"delete:"<<curr<<endl;
                }
                right++;
            }
            return maxi;
        }
        int max(int a,int b){
            return a>b?a:b;
        }
    };