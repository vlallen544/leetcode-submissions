#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack {
    char arr[10000];
    int top;
};

void push(struct stack* stack1, char val){
    stack1->top++;
    stack1->arr[stack1->top] = val;
}

char pop(struct stack* stack1){
    char popped = stack1->arr[stack1->top];
    stack1->top--;
    return popped;
}

bool isValid(char* s) {
    struct stack* stack = malloc(sizeof(struct stack));
    stack->top = -1;

    int i = 0;

    while(s[i] != '\0'){

        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            push(stack, s[i]);
        }

        else {
            if(stack->top == -1){
                free(stack);
                return false;
            }

            char popped = pop(stack);

            if((s[i] == ')' && popped != '(') ||
               (s[i] == '}' && popped != '{') ||
               (s[i] == ']' && popped != '[')){
                free(stack);
                return false;
            }
        }

        i++;
    }

    bool result = (stack->top == -1);

    free(stack);
    return result;
}