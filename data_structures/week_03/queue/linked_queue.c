#include <stdio.h>
#include <stdlib.h>
#include "..\single_node\single_node.h"
#include "linked_queue.h"

#define OK 1
#define PROBLEM 0

struct Queue_ {
    int quantity;
    Node* first;
    Node* last;
};

Queue* create_queue() {
    Queue* queue = (Queue*) malloc(sizeof(struct Queue_));
    if(queue != NULL) {
        queue->quantity = 0;
        queue->first = NULL;
        queue->last = NULL;
    }
    return queue;
}

int inserting(Queue *queue, int element) {
    Node* new_node = (Node*) create_node(element);
    if(queue == NULL || new_node == NULL) {
        return PROBLEM;
    }

    if(queue->first == NULL && queue->last == NULL) {
        queue->first = new_node;
    } else {
        set_next(queue->last, new_node);
    }
    queue->last = new_node;
    queue->quantity++;
    return OK;
}

int removing(Queue *queue, int *element) {
    Node* old_first;

    if(queue->first == NULL) {
        return PROBLEM;
    }

    old_first = queue->first;
    queue->first = get_next(old_first);
    *element = get_data(old_first);
    free(old_first);
    queue->quantity--;
    return OK;
}

int next(Queue *queue, int *element) {
    if(queue->first == NULL) {
        return PROBLEM;
    }
    *element = get_data(queue->first);
    return OK;
}

void free_queue(Queue *queue) {
    Node* cursor;
    Node* current;
    
    if(queue == NULL) {
        return;
    }

    if(queue->first != NULL) {
        cursor = queue->first;
        while(cursor != NULL) {
            current = cursor;
            cursor = get_next(current);
            printf("Realising %d.\n", get_data(current));
            free(current);
        }
    }

    free(queue);
}