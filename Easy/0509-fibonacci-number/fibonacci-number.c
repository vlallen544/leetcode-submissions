int fib(int n){
    int x = 0;
    int y = 1;
    if(n <= 1){
        return n;
    }
    for(int i = 2; i<=n; i++){
        int temp = x+y;
        x = y;
        y = temp;
    }
    return y;
}