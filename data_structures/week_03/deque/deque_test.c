#include <stdio.h>
#include <stdlib.h>
#include "linked_deque.h"

#define LENGTH 10

int main() {
    Deque* deque;
    int i, value;

    deque = create_deque();
    if(deque != NULL) {
        
        for(i = 0; i < LENGTH; i++) {
            insert_end(deque, (i + 1) * 2);
        }

        if(get_begin(deque, &value)) {
            printf("Next of the deque is %d.\n", value);
        }

        printf("\n");
        for(i = 0; i < LENGTH; i++) {
            if(remove_begin(deque, &value)) {
                printf("Removing -> %d\n", value);
            } else {
                printf("Empty deque\n", value);
            }
        }
        
        free_deque(deque);        
    }
    
    return 0;
}