class Solution {
public:
    bool canJump(vector<int>& nums) {
        const int size=nums.size();
        int dp[size];
        dp[0]=nums[0];
        if(size==1)
            return true;
        if(dp[0]==0)
            return false;
        
        for (int i=1;i<size-1;i++){
            dp[i]=max(dp[i-1]-1,nums[i]);
            if(dp[i]==0)
                return false;
        }
        if(dp[size-2]>=1)
            return true;
        return false;
    }
    int max(int a,int b){
        if(a<b)
        return b;
        return a;
    }
};