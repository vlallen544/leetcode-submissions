/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    if(arrSize == 1){
        arr[0] = -1;
        *returnSize = arrSize;
        return arr;
    }
    int* res = malloc(arrSize*sizeof(int));
    int mr = -1;
    for(int i = arrSize-1; i>=0; i--){
        res[i] = mr;
        if(mr<arr[i]){
            mr = arr[i];
        }
    }
    *returnSize = arrSize;
    return res;
}