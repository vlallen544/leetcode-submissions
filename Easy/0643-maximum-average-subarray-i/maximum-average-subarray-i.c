double findMaxAverage(int* nums, int numsSize, int k) {
    double sum = 0;
    for(int i = 0; i<k; i++){
        sum += nums[i];
    }
    double avg = sum/k;
    int i = 0;
    int j = k-1;
    for(int j = k; j<numsSize; j++){
        sum = sum - nums[i] + nums[j];
        if(sum/k > avg){
            avg = sum/k;
        }
        i++;
    }
    return avg;
}
