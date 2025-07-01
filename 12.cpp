class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,char> ntr={
            {1,'I'},
            {5,'V'},
            {10,'X'},
            {50,'L'},
            {100,'C'},
            {500,'D'},
            {1000,'M'}
        };
        int temp=num;
        int position=1;
        string result;
        vector<tuple<int,int>>digits;
        while(temp){
            digits.push_back(make_tuple(position,temp%10));
            position*=10;
            temp/=10;
        }
        while(!digits.empty()){
            auto temp_tuple=digits.back();
            digits.pop_back();
            position=get<0>(temp_tuple);
            num=get<1>(temp_tuple);
            if(!num)
                continue;
            if(num==4 || num==9){
                result.append(1,ntr[position]);
                result.append(1,ntr[(num+1)*position]);
                continue;
            }else if(num>=5){
                result.append(1,ntr[5*position]);
                num-=5;
            }
            result.append(num,ntr[position]);
        }
        return result;
    }
};