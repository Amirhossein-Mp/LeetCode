class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
    vector<int> max_previous_height(size,0);
    vector<int> max_later_height(size,0);
    vector<int> max_height(size,0);
    long long int volume=0;
    for(int i=1;i<size;i++){
        max_later_height[size-1-i]=max(height[size-i],max_later_height[size-i]);
        max_previous_height[i]=max(height[i-1],max_previous_height[i-1]);
    }
    for (int i=0;i<size;i++){
        max_height[i]=min(max_previous_height[i],max_later_height[i]);
    }
    for (int i=0;i<size;i++){
        if(height[i]<=max_height[i])
            volume+=max_height[i]-height[i];
    }
    return volume;
    }
};