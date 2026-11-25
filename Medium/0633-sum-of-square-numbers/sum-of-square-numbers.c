bool judgeSquareSum(int c) {
    if(c == 0) return true;

    long long low = 0;
    long long high = (long long)sqrt(c);

    while(low <= high) {
        long long sum = low * low + high * high;

        if(sum < c) {
            low++;
        }
        else if(sum > c) {
            high--;
        }
        else {
            return true;
        }
    }
    return false;
}