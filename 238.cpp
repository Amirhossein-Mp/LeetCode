class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int> prefix(size);
        vector<int>postfix(size);
        vector <int> answer(size);
        prefix[0]=1;
        postfix[size-1]=1;
        for(int i=1;i<size;i++)
            prefix[i]=prefix[i-1]*nums[i-1];
        for(int i=size-2;i>=0;i--)
            postfix[i]=postfix[i+1]*nums[i+1];
        for(int i=0;i<size;i++)
            answer[i]=prefix[i]*postfix[i];
        return answer;
    }
};