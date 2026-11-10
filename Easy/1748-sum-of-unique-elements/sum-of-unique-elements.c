int sumOfUnique(int* nums, int numsSize) {
    int* seen = (int *)calloc(101,sizeof(int));
    for(int i = 0;i<numsSize; i++){
        if(seen[nums[i]] >= 1){
            seen[nums[i]]++;
        }
        else if(seen[nums[i]] == 0){
            seen[nums[i]] = 1;
        }
    }
    int sum = 0;
    for(int i = 0; i<numsSize; i++){
        if(seen[nums[i]] == 1){
            sum += nums[i];
        }
    }
    return sum;
}