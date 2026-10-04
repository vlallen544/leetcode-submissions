#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct stack {
    int arr[10000000];
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

int calPoints(char** operations, int operationsSize) {
    struct stack *stack1 = (struct stack*)malloc(sizeof(struct stack));
    stack1->top = -1;
    int i = 0;
    int result = 0;
    while(i<operationsSize){
        if(operations[i][0] == '+'){
            int a, b, c;
            a = stack1->arr[stack1->top];
            b = stack1->arr[stack1->top - 1];
            c = a+b;
            push(stack1, c);
        }
        else if(operations[i][0] == 'C'){
            pop(stack1);
        }
        else if(operations[i][0] == 'D'){
            int num = stack1->arr[stack1->top];
            num = num*2;
            push(stack1, num);
        }
        else{
            int num = atoi(operations[i]);
            push(stack1, num);
        }
        i++;
    }

    for (int i = 0; i <= stack1->top; i++) {
        result += stack1->arr[i];
    }

    free(stack1);
    return result;

}