
void quickSort(int* nums, int low, int high){

    if(low >= high) return;

    // Randomized pivot
    int randomIndex = low + rand() % (high - low + 1);

    int temp = nums[low];
    nums[low] = nums[randomIndex];
    nums[randomIndex] = temp;

    int pivot = nums[low];

    int lt = low;
    int i = low + 1;
    int gt = high;

    while(i <= gt){

        if(nums[i] < pivot){
            temp = nums[lt];
            nums[lt] = nums[i];
            nums[i] = temp;

            lt++;
            i++;
        }
        else if(nums[i] > pivot){
            temp = nums[i];
            nums[i] = nums[gt];
            nums[gt] = temp;

            gt--;
        }
        else{
            i++;
        }
    }

    quickSort(nums, low, lt - 1);
    quickSort(nums, gt + 1, high);
}

int* sortArray(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize;

    quickSort(nums, 0, numsSize - 1);

    return nums;
}
