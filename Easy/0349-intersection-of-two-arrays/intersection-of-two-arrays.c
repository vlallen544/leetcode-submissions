/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *res = malloc((nums1Size+nums2Size)*sizeof(int));
    int k = 0;
    for(int i = 0; i<nums1Size; i++){
        int cnt = 0;
        int duplicate = 0;
        for(int j = 0; j<nums2Size; j++){
            if(nums1[i] == nums2[j]){
                cnt++;
                break;
            }
        }
        for(int x = 0; x < k; x++) {
            if(res[x] == nums1[i]) {
                duplicate = 1;
                break;
            }
        }
        if(cnt > 0 && duplicate == 0){
            res[k] = nums1[i];
            k++;
        }
    }
    *returnSize = k;
    return res;
}