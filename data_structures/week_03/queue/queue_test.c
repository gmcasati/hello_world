#include <stdio.h>
#include "linked_queue.h"

#define LENGTH 10

int main() {
    Queue *queue;
    int i, value;

    queue = create_queue();
    for(i = 0; i < LENGTH; i++) {
        inserting(queue, (i + 1) * 2);
    }

    if(next(queue, &value)) {
        printf("Next of the queue is %d.\n", value);
    }
    
    printf("\n");

    // for(i = 0; i < LENGTH; i++) {
    //     if(removing(queue, &value)) {
    //         printf("Removing -> %d\n", value);
    //     } else {
    //         printf("Empty queue\n", value);
    //     }
    // }

    free_queue(queue);
    return 0;
}