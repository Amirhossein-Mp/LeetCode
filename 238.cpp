class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSize=gas.size();
        int index=0;
        int sum=0;
        for (int i=0;i<gasSize;i++)
            sum+=gas[i]-cost[i];
        if(sum<0)
            return -1;
        sum=0;
        for (int i=0;i<gasSize;i++){
            sum+=gas[i]-cost[i];
            if(sum<0){
                sum=0;
                index=i+1;
            }
        }
        return index;
    }
};