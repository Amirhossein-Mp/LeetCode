class Solution {
public:
    int jump(vector<int>& nums) {
        const int size=nums.size();
        vector<tuple<int,int>> dp(size,{0,100000});
        dp[size-1]={1,0};
        for (int i=size-2;i>=0;i--){
            int maxj=nums[i];
            for(int j=1;j<=maxj && i+j<size;j++)
                if(get<0>(dp[i+j])){
                    dp[i]={1,min(get<1>(dp[i+j])+1,get<1>(dp[i]))};
                }
            
        }
        for(int i=size-1;i>=0;i--)
            cout<<'{'<<get<0>(dp[i])<<','<<get<1>(dp[i])<<'}'<<endl;
        return get<1>(dp[0]);
    }
};