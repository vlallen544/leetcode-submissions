int searchInsert(int* nums, int numsSize, int target) {

    int low = 0;
    int high = numsSize-1;
    int mid;
    
    int fr = 0;
    while(low<=high){
        mid = low + (high-low)/2;
        if(nums[mid] < target){
            low = mid + 1;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            fr = mid;
            break;
        }
    }
    if(fr == 0){
        return low;
    }
    return fr;
}