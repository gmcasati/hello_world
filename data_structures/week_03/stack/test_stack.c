#include <stdio.h>
#include "linked_stack.h"

#define LENGTH 10

int main() {
    Stack *stack;
    int i, value, l;

    stack = create_stack();
    for(i = 0; i < LENGTH; i++) {
        push(stack, (i + 1) * 2);
    }

    if(length(stack, &l)) {
        printf("\nTotal of elements in the stack: %d.\n", l);
    }
    
    if(top(stack, &value)) {
        printf("Top of the stack is %d.\n", value);
    }
    
    printf("\n");

    // for(i = 0; i < LENGTH; i++) {
    //     if(pop(stack, &value)) {
    //         printf("Popping -> %d\n", value);
    //     } else {
    //         printf("Empty Stack\n", value);
    //     }
    // }

    free_stack(stack);
    return 0;
}