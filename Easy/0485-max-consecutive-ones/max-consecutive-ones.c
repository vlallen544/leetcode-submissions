int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int cnt = 0;
    int maxc = 0;
    if(numsSize == 1){
        return nums[0];
    }
    for(int i = 0; i<numsSize; i++){
        if(nums[i] == 1){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if(maxc<cnt){
            maxc = cnt;
        }
    }
    return maxc;
}