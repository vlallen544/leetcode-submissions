/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* seen = calloc(numsSize+1, sizeof(int));
    for(int i = 0; i<numsSize; i++){
        seen[nums[i]]++;
    }
    int k = 0;
    int* res = malloc(numsSize*sizeof(int));
    for(int i = 1; i<numsSize; i++){
        if(seen[i] == 0){
            res[k] = i;
            k++;
        }
    }
    if(seen[numsSize]==0){
        res[k] = numsSize;
        k++;
    }
    free(seen);
    *returnSize = k;
    return res;
}