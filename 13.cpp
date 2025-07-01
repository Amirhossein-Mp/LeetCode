class Solution {
public:
    int romanToInt(string s) {
        int size=s.size();
        int sum=0;
        unordered_map<char,int> rtn={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for (int i=0;i<size-1;i++){
            if(rtn[s[i]]<rtn[s[i+1]])
                sum-=rtn[s[i]];
            else
                sum+=rtn[s[i]];
        }

        return sum+rtn[s[size-1]];
    }
};