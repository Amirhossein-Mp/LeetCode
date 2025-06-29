class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        k%=size;
        if(k==0)
            return;
        reverse(nums,0,size-1);
        reverse(nums,0,k-1);
        reverse(nums,k,size-1);
    }
    private:
    void reverse(vector<int>&nums,int start,int end){
        while(end-start>=1){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    
};