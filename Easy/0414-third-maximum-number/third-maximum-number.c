#include <limits.h>

int thirdMax(int* nums, int numsSize) {
    int max1 = nums[0];
    for(int i = 0; i < numsSize; i++){
        if(max1 < nums[i]){
            max1 = nums[i];
        }
    }
    long max2 = LONG_MIN;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < max1 && nums[i] > max2){
            max2 = nums[i];
        }
    }
    if(max2 == LONG_MIN){
        return max1;
    }
    long max3 = LONG_MIN;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < max2 && nums[i] > max3){
            max3 = nums[i];
        }
    }
    if(max3 == LONG_MIN){
        return max1;
    }
    return (int)max3;
}