/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int *res = (int *)malloc(2*sizeof(int));
    int xor = 0;
    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0; i < numsSize; i++){
        xor ^= nums[i];
    }

    unsigned int mask = (unsigned int)xor & (-(unsigned int)xor);

    for(int i = 0; i<numsSize; i++){
        if((unsigned int)(nums[i] & mask)){
            xor1 ^= nums[i];
        }
        else{
            xor2 ^= nums[i];
        }
    }

    res[0] = xor1;
    res[1] = xor2;

    return res;
}