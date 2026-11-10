/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int* res = (int *)malloc(numsSize*sizeof(int));
    int j = 0;
    int k = numsSize-1;
    for(int i = 0; i<numsSize; i++){
        if(nums[i]%2==0){
            res[j] = nums[i];
            j++;
        }
        else{
            res[k] = nums[i];
            k--;
        }
    }
    *returnSize = numsSize;
    return res;
}