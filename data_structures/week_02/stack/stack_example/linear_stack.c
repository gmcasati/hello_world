#include <stdlib.h>
#include "linear_stack.h"

#define OK 1
#define PROBLEM 0

struct Stack_ {
    int quantity;
    int elements[LENGTH];
};

Stack* create_stack() {
    struct Stack_* stack = (struct Stack_*) malloc(sizeof(struct Stack_));
    if(stack != NULL) {
        stack->quantity = 0;
    }
    return stack;
}

int push(Stack* stack, int value) {
    
    if(stack->quantity == LENGTH)
        return PROBLEM;
    
    stack->elements[stack->quantity++] = value;
    
    return OK;
}

int pop(Stack* stack, int *value) {
    if(stack->quantity == 0)
        return PROBLEM;

    *value = stack->elements[stack->quantity - 1];
    stack->quantity--;
    return OK;
}

int top(Stack* stack, int *value) {
    if(stack->quantity == 0)
        return PROBLEM;

    *value = stack->elements[stack->quantity - 1];
    return OK;
}

void free_stack(Stack* stack) {
    free(stack);
}