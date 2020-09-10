#include <stdio.h>
#include "linear_stack.h"


int main() {
    Stack *stack;
    int i, value;

    stack = create_stack();
    for(i = 0; i < LENGTH; i++) {
        push(stack, (i + 1) * 2);
    }

    if(top(stack, &value)) {
        printf("Top of the stack is %d.\n", value);
    }
    
    printf("\n");

    for(i = 0; i < LENGTH; i++) {
        if(pop(stack, &value)) {
            printf("Popping -> %d\n", value);
        } else {
            printf("Empty Stack\n", value);
        }
    }

    free_stack(stack);
    return 0;
}