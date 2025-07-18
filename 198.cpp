class Solution {
    public:
        int rob(vector<int>& nums) {
            int size=nums.size();
            if(size==1)
                return nums[0];
            if(size==2)
                return max(nums[0],nums[1]);
            int p1=max(nums[1],nums[0]+nums[2]);
            int p2=max(nums[0],nums[1]);
            int p3=nums[0];
            int curr=p1;
            int temp1;
            int temp2;
            for(int i=3;i<size;i++){
                temp1=max(p2,p3);
                curr=max(temp1+nums[i],p1);
                p3=p2;
                p2=p1;
                p1=curr;
            }
            return curr;
        }
        int max(int a,int b){
            return a>b?a:b;
        }
    };