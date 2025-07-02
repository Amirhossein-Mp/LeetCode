class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size=numbers.size();
        int remaining;
        int index;
        for(int i=0;i<size;i++){
            remaining=target-numbers[i];
            index=binary_search(numbers,remaining);
            if(index==-1)
                continue;
            if(numbers[index]==numbers[i])
                return {i+1,i+2};     
            return {i+1,index+1};
        }
        return {};
    }
    int binary_search(vector<int>&numbers,int number){
        int size=numbers.size();
        int l=0;
        int r=size-1;
        while(l<=r){
            if(numbers[(r+l)/2]==number)
                return (r+l)/2;
            else if(numbers[(r+l)/2]>number)
                r=(r+l)/2-1;
            else
                l=(r+l)/2+1;
        }
        return -1;
    }
};