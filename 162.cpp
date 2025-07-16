class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int size=nums.size();
            int left=0;
            int right=size-1;
            int median;
            while(left<right){
                median=(left+right)/2;
                if(nums[median+1]>nums[median])
                    left=median+1;
                else
                    right=median;
            }
            return left;
        }
    };