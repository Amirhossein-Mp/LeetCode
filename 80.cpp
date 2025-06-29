class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        int last=0;
        int num=1;
        int i=1;
        int k=1;
        while(i<size){
            if(nums[i]!=nums[last]){
                nums[++last]=nums[i];
                num=1;
                i++;
                k++;
            }else if((nums[i]==nums[last])&(num&1)){
                nums[++last]=nums[i];
                num++;
                i++;
                k++;
            }else if((nums[i]==nums[last]) & !(num&1)){
                i++;
            }
        }
        return k;
    }
};