class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for (int n:prices){
            if (n<min)
                min=n;
            else if((n-min)>profit)
                    profit=n-min;
        }
        return profit;
    }
};