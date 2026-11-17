
#include <stdlib.h>

void merge(int *nums, int *res, int low, int high){
    int mid = low + (high - low)/2;
    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high){
        if(nums[i] <= nums[j]){
            res[k++] = nums[i++];
        }
        else{
            res[k++] = nums[j++];
        }
    }

    while(i <= mid){
        res[k++] = nums[i++];
    }

    while(j <= high){
        res[k++] = nums[j++];
    }

    for(int x = low; x <= high; x++){
        nums[x] = res[x];
    }
}

void mergesort(int *nums, int *res, int low, int high){
    if(low < high){
        int mid = low + (high - low)/2;

        mergesort(nums, res, low, mid);
        mergesort(nums, res, mid+1, high);

        merge(nums, res, low, high);
    }
}

int* sortArray(int* nums, int numsSize){
    if(numsSize <= 1){
        return nums;
    }
    int *res = malloc(numsSize * sizeof(int));
    if(res == NULL){
        return NULL;
    }
    mergesort(nums, res, 0, numsSize-1);
    free(res);
    return nums;
}

int maximumProduct(int* nums, int numsSize) {
    sortArray(nums, numsSize);
    int num1 = nums[numsSize-1]*nums[numsSize-2]* nums[numsSize-3];
    int num2 = nums[0]*nums[1]* nums[numsSize-1];
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}