class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        int last=0;
        for (int i=1;i<size;i++){
            if(nums[i]!=nums[last]){
                nums[last+1]=nums[i];
                last++;
            }
        }   
        return last+1;
    }
};