class Solution {
    public:
        int climbStairs(int n) {
            if(n<=3)
                return n;
            int p1=3;
            int p2=2;
            int curr;
            for(int i=3;i<n;i++){
                curr=p1+p2;
                p2=p1;
                p1=curr;
            }
            return curr;
        }
    };