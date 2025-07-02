class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size();
        long long int l=0;
        long long int r=height.size()-1;
        long long int maxi=0;
        long long int col;
        long long int volume;
        bool flag=true;
        while(l<r){
            col=min(height[l],height[r]);
            maxi=max(maxi,col*(r-l));
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return maxi;
    }
};