class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            if(!nums.size())
                return {-1,-1};
            int ans1=binarySearch1(nums,target,0,nums.size()-1);
            int ans2=-1;
            if(nums[ans1]==target)
                ans2=binarySearch2(nums,target,0,nums.size()-1);
            if(ans2==-1)
                return {-1,-1};
            else    
                return {ans2,ans1};
        }
        int binarySearch1(vector<int>&nums,int target,int i,int j){
            int left=i;
            int right=j;
            int mid;
            while(left<right){
                mid=(left+right+1)/2;
                if(nums[mid]>target)
                    right=mid-1;
                else
                    left=mid;
            }
            return right;
        }
        int binarySearch2(vector<int>&nums,int target,int i,int j){
            int left=i;
            int right=j;
            int mid;
            while(left<right){
                mid=(left+right)/2;
                if(nums[mid]<target)
                    left=mid+1;
                else
                    right=mid;
            }
            return left;
        }
    };