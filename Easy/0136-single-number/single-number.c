int singleNumber(int* nums, int numsSize) {
    int seen[200001] = {0};

    for(int i = 0; i < numsSize; i++) {
        if(seen[nums[i] + 100000] > 0) {
            seen[nums[i] + 100000] += 1;
        }
        else {
            seen[nums[i] + 100000] = 1;
        }
    }

    int value = 0;

    for(int i = 0; i < numsSize; i++) {
        if(seen[nums[i] + 100000] == 1) {
            value = nums[i];
            break;
        }
    }

    return value;
}