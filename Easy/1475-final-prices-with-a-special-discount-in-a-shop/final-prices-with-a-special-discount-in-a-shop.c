/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

struct stack {
    int arr[100000];
    int top;
};

void push(struct stack* stack1, int val){
    stack1->top++;
    stack1->arr[stack1->top] = val;
}

int pop(struct stack* stack1){
    int popped = stack1->arr[stack1->top];
    stack1->top--;
    return popped;
}

int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    struct stack* stack1 = (struct stack*)malloc(sizeof(struct stack));
    stack1->top = -1;
    int i;
    int *arr1 = malloc(pricesSize*sizeof(int));
    for(i = 0; i<pricesSize; i++){
        int found = 0;

        for(int j = i + 1; j < pricesSize; j++){
            if(prices[j] <= prices[i]){
                push(stack1, prices[i] - prices[j]);
                found = 1;
                break;
            }
        }
        if(found == 0){
            push(stack1, prices[i]);
        }
    }

    for(int k = 0; k<pricesSize; k++){
        arr1[k] = stack1->arr[k];
    }
    *returnSize = pricesSize;
    return arr1;
    free(stack1);

}