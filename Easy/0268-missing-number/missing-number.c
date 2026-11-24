int missingNumber(int* nums, int numsSize) {
    int *seen = calloc(numsSize+1, sizeof(int));
    for(int i = 0; i<numsSize; i++){
        seen[nums[i]]++;
    }
    int f;
    for(int i = 0; i<numsSize; i++){
        if(seen[i] == 0){
            f = i;
            break;
        }
    }
    return f;
}