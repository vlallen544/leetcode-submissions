int minCostClimbingStairs(int* cost, int costSize) {
    int dp[costSize + 1];

    dp[0] = 0;
    dp[1] = 0;

    for(int i = 2; i <= costSize; i++){
        int oneStep = dp[i-1] + cost[i-1];
        int twoStep = dp[i-2] + cost[i-2];

        if(oneStep < twoStep){
            dp[i] = oneStep;
        }
        else{
            dp[i] = twoStep;
        }
    }

    return dp[costSize];
}