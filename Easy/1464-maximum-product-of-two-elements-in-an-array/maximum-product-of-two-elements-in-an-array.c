int maxProduct(int* nums, int numsSize) {
    int i = 1;
    while(i<numsSize){
        int j = i;
        while(j>0 && nums[j-1] > nums[j]){
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
        i++;
    }
    return (nums[numsSize-1]-1)*(nums[numsSize-2]-1);
}