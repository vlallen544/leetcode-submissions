int mySqrt(int x) {
    int low = 0;
    int high = x;
    while(low<=high){
        int mid = low + (high-low)/2;
        long long square = (long long)mid * mid;
        if(square<x){
            low = mid + 1;
        }
        else if(square>x){
            high = mid - 1;
        }
        else if(square==x){
            return mid;
        }
    }
    return high;
}