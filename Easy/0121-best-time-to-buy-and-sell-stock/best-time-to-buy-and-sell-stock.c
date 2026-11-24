int maxProfit(int* prices, int pricesSize) {
    int best = 0;
    int low = INT_MAX;
    for(int i = 0; i<pricesSize; i++){
        if(prices[i]-low>best){
            best = prices[i]-low;
        }
        if(prices[i]<low){
            low = prices[i];
        }
    }
    return best;
}