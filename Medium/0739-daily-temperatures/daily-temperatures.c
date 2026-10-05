/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

struct stack {
    int arr[100000];
    int top;
};

void push(struct stack* stack1, int val) {
    stack1->top++;
    stack1->arr[stack1->top] = val;
}

int pop(struct stack* stack1) {
    int popped = stack1->arr[stack1->top];
    stack1->top--;
    return popped;
}

int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {

    struct stack* stack1 = (struct stack*)malloc(sizeof(struct stack));
    stack1->top = -1;

    int *result = calloc(temperaturesSize, sizeof(int));

    for (int i = 0; i < temperaturesSize; i++) {

        while (stack1->top != -1 &&
               temperatures[i] > temperatures[stack1->arr[stack1->top]]) {

            int oldIndex = pop(stack1);

            result[oldIndex] = i - oldIndex;
        }

        push(stack1, i);
    }

    *returnSize = temperaturesSize;

    free(stack1);

    return result;
}