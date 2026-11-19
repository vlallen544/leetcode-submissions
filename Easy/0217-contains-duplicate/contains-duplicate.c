#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void merge(int *nums, int *res, int low, int mid, int high) {

    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high) {

        if(nums[i] <= nums[j]) {
            res[k++] = nums[i++];
        }
        else {
            res[k++] = nums[j++];
        }
    }

    while(i <= mid) {
        res[k++] = nums[i++];
    }

    while(j <= high) {
        res[k++] = nums[j++];
    }

    for(int x = low; x <= high; x++) {
        nums[x] = res[x];
    }
}

void mergesort(int *nums, int *res, int low, int high) {

    if(low < high) {

        int mid = low + (high - low) / 2;

        mergesort(nums, res, low, mid);
        mergesort(nums, res, mid + 1, high);

        merge(nums, res, low, mid, high);
    }
}

bool containsDuplicate(int* nums, int numsSize) {

    int *res = malloc(numsSize * sizeof(int));

    if(res == NULL) {
        return false;
    }

    mergesort(nums, res, 0, numsSize - 1);

    for(int i = 0; i < numsSize - 1; i++) {

        if(nums[i] == nums[i + 1]) {
            free(res);
            return true;
        }
    }

    free(res);
    return false;
}