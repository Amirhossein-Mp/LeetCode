class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int currSum=0;
            int size=nums.size();
            int minLength= numeric_limits<int>::max();
            int left=0;
            for (int right=0;right<size;right++){
                currSum+=nums[right];
                while(currSum>=target){
                    currSum-=nums[left];
                    cout<<"left= "<<left<<"right= "<<right<<endl;
                    minLength=min(minLength,right-left+1);
                    left++;
                }
            }
            return minLength!=numeric_limits<int>::max()?minLength:0;
        }
        int min(int a,int b){
            return a<b?a:b;
        }
        
    };