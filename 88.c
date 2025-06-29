#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums={1,1,1,2,2,3};
    int size=nums.size();
        int last=0;
        int num=1;
        int i=1;
        int k=1;
        while(i<size){
            if(nums[i]!=nums[last]){
                // cout<<"1"<<endl;
                nums[++last]=nums[i];
                num=1;
                i++;
                k++;
            }else if((nums[i]==nums[last]) & (num&1)){
                // cout<<"2"<<endl;
                last++;
                num++;
                i++;
                k++;
            }else if((nums[i]==nums[last]) & !(num&1))
                i++;
        }
        return k;
    for (int j=0;j<=nums.size();j++)
        cout<<nums[j]<<",";
    
    return 0;
}