class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int sum=0;
        int index;
        int k;
        for(int i=0;i<size;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            if(nums[i]>0)
                break;
            for(int j=i+1;j<size;j++){
                if(j>(i+1) && nums[j]==nums[j-1])
                    continue;
                sum=nums[j]+nums[i];
                if(sum>0)
                    break;
                index=binary_search(nums,-sum,j+1,size-1);
                if(index==-1)
                    continue;
                vector<int> res;
                res.push_back(nums[i]);
                res.push_back(nums[j]);
                res.push_back(nums[index]);
                results.push_back(res);
            }
        }   
        return results;
    }
    int binary_search(vector<int>&numbers,int number,int l,int r){
        int size=numbers.size();
        while(l<=r){
            if(numbers[(r+l)/2]==number)
                return (r+l)/2;
            else if(numbers[(r+l)/2]>number)
                r=(r+l)/2-1;
            else
                l=(r+l)/2+1;
        }
        return -1;
    }
};