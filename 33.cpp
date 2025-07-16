class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int pv=pickValley(nums);
            int ans1=binarySearch(nums,target,0,pv-1);
            int ans2=binarySearch(nums,target,pv,nums.size()-1);
            if(ans1!=-1)
                return ans1;
            if(ans2!=-1)
                return ans2;
            return -1;
        }int pickValley(vector<int>&nums){
            int left=0;
            int right=nums.size()-1;
            int mid;
            while(left<right){
                mid=(left+right)/2;
                if(nums[mid]>nums[right])
                    left=mid+1;
                else
                    right=mid;
            }
            return left;
        }int binarySearch(vector<int>&nums,int target,int i, int j){
            int left=i;
            int right=j;
            int mid;
            while(left<=right){
                mid=(left+right)/2;
                if(nums[mid]==target)
                    return mid;
                if(nums[mid]>target)
                    right=mid-1;
                else
                    left=mid+1;
            }
            return -1;
        }
    };