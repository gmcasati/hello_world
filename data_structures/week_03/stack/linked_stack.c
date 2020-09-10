#include <stdio.h>
#include <stdlib.h>
#include "single_node.h"
#include "linked_stack.h"

#define OK 1
#define PROBLEM 0

struct Stack_ {
    int quantity;
    Node* top;
};

Stack* create_stack() {
    Stack* stack = (Stack*) malloc(sizeof(struct Stack_));
    if(stack != NULL) {
        stack->quantity = 0;
        stack->top = NULL;
    }
    return stack;
}

int push(Stack* stack, int value) {
    Node* new_node = create_node(value);
    if(stack == NULL || new_node == NULL) {
        return PROBLEM;
    }
    
    set_next(new_node, stack->top);
    stack->top = new_node;
    stack->quantity++;
    return OK;
}

int pop(Stack* stack, int *value) {
    if(stack == NULL || stack->top == NULL) {
        return PROBLEM;
    }
    
    Node* old_top = stack->top;
    *value = get_data(old_top);
    stack->top = get_next(old_top);
    free(old_top);
    stack->quantity--;
    return OK;
}

int top(Stack* stack, int *value) {
    if(stack == NULL || stack->top == NULL) {
        return PROBLEM;
    }
    *value = get_data(stack->top);
    return OK;
}

int length(Stack* stack, int *length) {
    if(stack == NULL)
        return PROBLEM;
    *length = stack->quantity;
    return OK;
}

void free_stack(Stack* stack) {
    if(stack == NULL)
        return;

    if(stack->top != NULL) {
        int data;
        while(pop(stack, &data)) {
            printf("Releasing %d...\n", data);
        }
    }

    free(stack);
}