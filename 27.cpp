class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;    
        int size=nums.size();
        for(int i=0;i+k<(int)nums.size();i++){
            while(nums[i]==val & i+k<(int)nums.size()){
                if(nums[size-k-1]!=val){
                    nums[i]=nums[size-1-k];
                    nums[size-1-k]=val;
                }
                k++;
            }
        }
        k=int(nums.size())-k;  
        return k;
    }
};