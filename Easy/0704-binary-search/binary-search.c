int search(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize-1;
    int fr = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] < target){
            low = mid + 1;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else if(nums[mid] == target){
            fr = mid;
            break;
        }
    }
    if(fr == -1){
        return fr;
    }
    else{
        return fr;
    }
}
