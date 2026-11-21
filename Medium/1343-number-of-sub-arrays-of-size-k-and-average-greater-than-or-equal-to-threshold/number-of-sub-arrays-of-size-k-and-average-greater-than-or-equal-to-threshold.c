int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int i = 0;
    int j = k;
    int sum = 0;
    for(int i = 0; i<j;i++){
        sum += arr[i];
    }
    i = 0;
    int cnt = 0;
    if(sum >= k * threshold){
        cnt++;
    }
    for(int j = k; j<arrSize; j++){
        sum = sum + arr[j] - arr[i];
        if(sum >= k * threshold){
            cnt++;
        }
        i++;
    }
    return cnt;
}