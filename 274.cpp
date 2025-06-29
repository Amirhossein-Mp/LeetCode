class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size=citations.size();
        vector<int>mins;
        int maxi=0;
        sort(citations.begin(),citations.end());
        for(int i=0;i<size;i++){
            if((size-i)>=citations[i])
                maxi=max(maxi,citations[i]);
            else
                maxi=max(maxi,size-i);
        }
        return maxi;
    }
};