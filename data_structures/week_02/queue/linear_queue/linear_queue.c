#include <stdlib.h>
#include "linear_queue.h"

#define OK 1
#define PROBLEM 0

struct Queue_ {
    int quantity;
    int elements[LENGTH];
};

Queue* create_queue() {
    struct Queue_* queue = (struct Queue_*) malloc(sizeof(struct Queue_));
    if(queue != NULL) {
        queue->quantity = 0;
    }
    return queue;
}

int inserting(Queue *queue, int element) {
    if(queue->quantity == LENGTH)
        return PROBLEM;
    queue->elements[queue->quantity++] = element;
    return OK;
}

int removing(Queue *queue, int *element) {
    int i;
    if(queue->quantity == 0)
        return PROBLEM;
    *element = queue->elements[0];
    for(i = 1; i < queue->quantity; i++) {
        queue->elements[i - 1] = queue->elements[i];
    }
    queue->quantity--;
    return OK;
}

int next(Queue *queue, int *element) {
    if(queue->quantity == 0)
        return PROBLEM;
    *element = queue->elements[0];
    return OK;
}

void free_queue(Queue *queue) {
    free(queue);
}