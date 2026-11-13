void sortColors(int* nums, int numsSize) {
    int i = 1;
    while(i<numsSize){
        int k = i;
        while(k>0 && nums[k-1]>nums[k]){
            int temp = nums[k-1];
            nums[k-1] = nums[k];
            nums[k] = temp;
            k--;
        }
        i++;
    }
}