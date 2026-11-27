/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* ans = malloc((n+1)*sizeof(int));
    for(int i = 0; i<=n; i++){
        if(i<=1){
            ans[i] = i;
        }
        else if((i&(i-1))==0){
            ans[i] = 1;
        }
        else{
            int cnt = 0;
            int k = i;
            while(k>0){
                if(k%2==1){
                    cnt++;
                }
                k = k/2;
            }
            ans[i] = cnt;
        }
    }
    *returnSize = n+1;
    return ans;
}