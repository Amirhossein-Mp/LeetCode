void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if (m != 0 & n != 0) {
        int* finalArray = (int*)malloc((m + n) * sizeof(int));
        int j = 0;
        int k = 0;
        for (int i = 0; i < m + n; i++) {
            if( j<m & k<n){
                if (nums1[j] < nums2[k] ) {
                    finalArray[i] = nums1[j];
                    j++;
                } else {
                    finalArray[i] = nums2[k];
                    k++;
                }
            }else if(j<m){
                finalArray[i]=nums1[j];
                j++;
            }else{
                finalArray[i]=nums2[k];
                k++;
            }
        }
        for (int i = 0; i < m + n; i++)
            nums1[i] = finalArray[i];
        free(finalArray);
    }
    if (m == 0 & n != 0) {
        for (int i = 0; i < n; i++)
            nums1[i] = nums2[i];
    }
}