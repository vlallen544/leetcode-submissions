int climbStairs(int n) {
    int x = 2;
    int y = 3;
    if(n<=3){
        return n;
    }
    for(int i = 3; i<n; i++){
        int temp = x+y;
        x = y;
        y = temp;
    }
    return y;
}