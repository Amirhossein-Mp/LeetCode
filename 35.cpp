class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int left=0;
            int right=nums.size()-1;
            int median;
            while(left<=right){
                median=(left+right)/2;
                if(nums[median]==target)
                    return median;
                if(nums[median]<target){
                    left=median+1;
                }else
                    right=median-1;
            }
            return left;
        }
    };